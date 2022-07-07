#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

bool isBlank(int num, int i, int j) {
    if (((i > num / 3) && (i <= num * 2 / 3)) && ((j > num / 3) && (j <= num * 2 / 3))) return true; 
    else if (num > 1) return isBlank(num / 3, i % (num / 3), j % (num / 3)); 
    else return false;


}

void hollSquare(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (isBlank(num, i, j)) std::cout << " ";
            else std::cout << "*";
        }
        std::cout << "\n";
    }
}

int main()

{


    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int num;
    cin >> num;

    hollSquare(num);




}