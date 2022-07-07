#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


bool isPrime(int num) {

//소수는 1 외에 인수가 없는 수


    if (num == 1) return false;

    for (int i = 2; i * i <= num; i++) {
         
        //i는 2 이상의 자연수
        // i 제곱이 num보다 커질때까지 검사
        //주어진 수를 i로 나누었을때 나누어 떨어지지 않으면? 소수
    
        if ((num % i) == 0) return false;
    
    
    }

    return true;
}



int main()

{


    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int m;
    cin >> m;
    
    int n;
    cin >> n;
    int sum = 0;

    vector<int> arr;

    for (int i = m; i <= n; i++) {
    

        if (isPrime(i) == true) { arr.push_back(i); sum += i;
        }

    
    }
    if (arr.empty()) { cout << -1; return 0; }
    else {
        cout << sum<<'\n';
        cout << arr.at(0);
    }


    return 0;
}
