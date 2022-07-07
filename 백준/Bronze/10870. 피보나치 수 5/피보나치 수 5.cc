#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;



int fac(int n) {

    if (n <= 1) return 1;

    return n*fac(n-1);
}

int fibo(int n) {

    int f;

    if (n == 0) f = 0;
    else if (n == 1 || n == 2) f = 1;
    

    else f= fibo(n - 2) + fibo(n - 1);
        
    return f;
}

int main()

{


    ios_base::sync_with_stdio(false);

    cin.tie(NULL);


    int n; cin >> n;
    cout << fibo(n);





}