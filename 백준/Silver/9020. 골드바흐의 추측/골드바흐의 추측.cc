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


    if (num == 1 || num==0) return false;

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

    int n; cin >> n;

    for (int i = 0; i < n; i++){
    
    
        int num;
        cin >> num;

        int k = num / 2;

        for (int j = k; j <= num; j++) {

            if (isPrime(j) == true && isPrime(num-j)==true) {
                cout << num - j << " " << j << "\n"; break;
            }
        
        
        
        }
        


    
    
    
    
    
    }


    return 0;
}
