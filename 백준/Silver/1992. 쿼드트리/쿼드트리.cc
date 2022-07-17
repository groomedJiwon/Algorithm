using namespace std;
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL),cin.tie(nullptr),cin.tie(nullptr);
int n;
string p;
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };
char a[65][65];
//int visited[65][65];

void quard(int y, int x, int size) {
    if (size == 1) {
        cout << a[y][x]; return;
    }
    char b = a[y][x];



    for (int i = y; i < y + size; i++) {
        for (int j = x; j < x + size; j++) {
            if (b != a[i][j]) {

                cout << "(";

               
                quard(y, x, size / 2);
                
                quard(y, x + size / 2, size / 2);
                
                quard(y + size / 2, x, size / 2);
                
                quard(y + size / 2, x + size / 2, size / 2);
              
                
                cout << ")";
   

                return;
            }
        }
    }
    cout << a[y][x]; return;}


   int main() {
  
    
    cin >> n;
    for (int i = 0; i < n; i++) {
    
        cin >> p;
        for (int j = 0; j < p.length(); j++) {
        
            a[i][j] = p[j];
            
        }
        
    }


    quard(0,0,n);


    return 0;
}

