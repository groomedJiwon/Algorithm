#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int n;
int arr[26][26];
bool visited[26][26];
vector<int> home;
int sum = 0;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

//격자판 내에서 연결된 컴포넌트 개수를 찾는 유형은 dfs 사용

void dfs(int y, int x) {

	//cout << y << " " << x << "\n";

	visited[y][x] = true;
	sum++;

	for (int i = 0; i < 4; i++) {
	
		int ny = y + dy[i];
		int nx = x + dx[i];

		//종료조건
		if (ny < 0 || nx < 0 || nx >= n || ny >= n)
			continue;
		else if (arr[ny][nx] == 0 || visited[ny][nx] == true)
			continue;
		dfs(ny, nx); 
	}	
	
}

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for(int j = 0; j < s.length(); j++)
			arr[i][j]=s[j]-'0';
	}

	int ret = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j]!= true && arr[i][j] == 1) {
				ret++; dfs(i, j); home.push_back(sum); sum = 0; 
			}
		}
	}

	sort(home.begin(), home.end());

	cout << ret<<"\n";

	for (auto c : home) {
		cout << c<<"\n";
	}

}