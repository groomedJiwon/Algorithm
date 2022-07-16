using namespace std;
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL),cin.tie(nullptr),cin.tie(nullptr);
int b[101][101], e[101][101], visited[101][101], n, temp, ret = 1;
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };

//깊이순회
void dfs(int y, int x) {
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        //방문한 적이 없고 안전영역이라면(잠기지 않았다면)
        //연결된 곳을 dfs로 탐색
        if (!visited[ny][nx] && e[ny][nx] == 0) dfs(ny, nx);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    


    cin >> n;

    //높이를 담은 맵 입력받기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    //높이는 1부터 100까지이므로
    //안전영역의 최대값을 구해보기 위해
    //높이의 경우의 수를 가정하여 다 돌려본다 -> d는 1부터 100까지
    for (int d = 1; d < 101; d++) {
        //방문여부 배열을 0으로 초기화
       
        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
        //안전영역 개수를 저장하는 temp는 루프를 돌릴 때마다 0으로 초기화
        temp = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                //잠기는 여부를 저장하는 배열 e
                //맵의 원소가 d보다 작거나 같으면
                //e를 1로 배정 -> 잠긴다
                //e배열은 d의 높이가 올라갈수록
                //잠기는 부분이 줄어들지는 않고
                //늘어난다


                if (e[i][j] == 1) continue;
                if (b[i][j] <= d) e[i][j] = 1;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                //어떠한 좌표의 e가 잠기지 않고 그곳을 방문한 적이 없다면
                if (e[i][j] == 0 && !visited[i][j]) {
                    //dfs로 그곳과 연결된 부분 탐색
                    dfs(i, j);
                    //컴포넌트 수를 센다
                    //이 시도에서의 안전영역의 개수이다
                    temp++;
                }
            }
        }
        //d를 돌릴때마다 temp는 달라짐
        //ret은 루프를 돌릴 때 마다 temp의 최대값을 저장
        ret = max(ret, temp);
    }
    cout << ret << '\n';


    



    return 0;
}

