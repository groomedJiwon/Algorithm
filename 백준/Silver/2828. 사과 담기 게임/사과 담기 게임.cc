using namespace std;
#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL),cin.tie(nullptr),cin.tie(nullptr);


int main() {
  
    int n, m;

    cin >> n >> m;

    int j;
    cin >> j;

    pair<int, int> b;
    b.first = 1;
    b.second = m;

    int count=0;

    for (int i = 0; i < j; i++) {
        int a;
        cin >> a;
        int temp = 0;
        if (a < b.first) {
            temp = b.first - a;

            b.first -= temp;
            b.second -= temp;
            count += temp;
        }

        if (a > b.second) {
            temp = a - b.second;
            b.first += temp;
            b.second += temp;
            count += temp;
        }



        else continue;
    
    }
    
    cout << count;

    return 0;
}

