#include <iostream>
#include <cmath>
#include <string>
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
    
    int n;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++) {
    
        int num;
        cin >> num;
        
        if (isPrime(num) == true) count++;
    
    }

    cout << count;

    return 0;
}
