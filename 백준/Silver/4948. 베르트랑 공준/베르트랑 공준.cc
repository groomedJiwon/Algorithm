#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

/*

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    int roop = n;


    while (n != 1) {
        for (int i = 2; i <= roop; i++) {
            if (n % i == 0) {
                cout << i << endl;
                n = n / i;
                break;
            }
        }
    }

    return 0;
 







}
*/




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

   

    while (1) {


        long n;

        cin >> n; if (n == 0) break;


        int count = 0;


        for (int i = n+1; i <= 2 * n; i++) {

            if (isPrime(i) == true) count++;

        }

        cout << count << '\n';
    }
    return 0;
}
