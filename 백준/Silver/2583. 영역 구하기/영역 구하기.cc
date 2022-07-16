using namespace std;
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL),cin.tie(nullptr),cin.tie(nullptr);
int p[101][101], visited[101][101], temp = 0;
int n, m, k;
int ly, lx, ry, rx;
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };

vector<int> ar;

//깊이순회
int dfs(int y, int x) {
    visited[y][x] = 1;
    int area=1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >=n || nx >=m) continue;
        //방문한 적이 없고 직사각형이 아닌 곳이라면
        //연결된 곳을 dfs로 탐색
        if (!visited[ny][nx] && p[ny][nx] == 0) 
        {
            area+=dfs(ny, nx); 
        }
    }

    return area;
}
int main() {

    

    //모눈종이 크기와 직사각형의 개수 입력받기
    cin >> n >> m >> k;

    for (int i = 0; i < k; i++) {
        cin >> lx >> ly >> rx >> ry;

        for (int j=ly; j < ry; j++) {
            for (int k=lx; k < rx ; k++) {
                p[j][k] = 1;
            }
        }
    
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            //어떠한 좌표의 p가 직사각형 부분이 아니고 그곳을 방문한 적이 없다면
            if (p[i][j] == 0 && !visited[i][j]) {
               
                //dfs로 그곳과 연결된 부분 탐색
                
                //컴포넌트 수를 센다
                temp++;
                ar.push_back(dfs(i, j));
            }

        }
    }






    cout << temp << '\n';
    sort(ar.begin(), ar.end());
    for (int c : ar) cout << c << " ";


    



    return 0;
}

