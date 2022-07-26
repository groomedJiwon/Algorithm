using namespace std;
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL),cin.tie(nullptr),cin.tie(nullptr);

int n, m;
int a[8][8];
bool visited[8][8];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = { 0, 1, 0, -1 };
typedef pair<int, int> pi;
vector <pi> v;

void dfs(int y, int x) {
	//벽을 만나면 바이러스가 퍼질 수 없으므로 dfs 종료
	//이미 방문한 곳이어도 종료
	if (a[y][x] == 1 || visited[y][x]==true) return;
	//방문하였다
	visited[y][x] = true;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny >= n || nx >= m || ny < 0 || nx < 0 ) continue;
		dfs(ny, nx);
	
	}
}
int solve() {
	//0으로 방문배열 초기화
	memset(visited, 0, sizeof(visited));
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//바이러스가 있는 칸에서 상하좌우 뚫린 모든 칸으로 
			//계속 퍼지는 dfs 실행
			if (a[i][j] == 2) dfs(i, j)
				;
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//바이러스가 감염되지 않은 칸의 개수를 셈
			if (visited[i][j] == false && a[i][j] == 0) ans++;
		}
	}

	return ans;
}

int main() {

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			//벽을 세울 수 있는 좌표를 저장
			if (a[i][j] == 0) v.push_back(pi(i,j));
		}
	}

	int ans = 0;
	//벽을 세울 수 있는 서로 다른 좌표쌍 중 3개를 순서상관없이 뽑는
	//조합 (3개정도는 3중for문으로 가능)
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < j; k++) {
				a[v[i].first][v[i].second] = 1;
				a[v[j].first][v[j].second] = 1;
				a[v[k].first][v[k].second] = 1;

				//루프를 돌때마다 solve의 리턴값의 최대값을 비교하며
				//main 안의 ans에 저장
				ans = max(ans, solve());

				//다음 루프에서는 다른 가능성을 고려해야하므로
				//0으로 돌려놓는다
				a[v[i].first][v[i].second] = 0;
				a[v[j].first][v[j].second] = 0;
				a[v[k].first][v[k].second] = 0;
			}
		}
	}

	cout << ans;

}

