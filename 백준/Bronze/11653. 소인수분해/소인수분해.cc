#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;



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