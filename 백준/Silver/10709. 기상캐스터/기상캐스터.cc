using namespace std;
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL),cin.tie(nullptr),cin.tie(nullptr);


int h, w;
char a[100][100];

int main() {

    
  

    cin >> h >> w;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
            
        }
    }


    for (int i = 0; i < h; i++) {
        int count = -10000;
        for (int j = 0; j < w; j++) {
            count++;
            if (a[i][j] == 'c') { cout << "0 "; count = 0; }
            else {
                if (count > 0) cout << count << " ";
                else cout <<"-1 ";
            }
        }cout << "\n";
    }            

}

