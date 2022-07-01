#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()

{


    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    
    int t;
    cin >> t;


    int r;
    

    string input;
   


    for (int i = 0; i < t; i++) {
        cin >> r; cin >> input;

        for (int j = 0; j < input.length(); j++) {

            for (int k = 0; k < r; k++) {

                cout << input.at(j);

            }
        }
        cout << "\n";
    }



    return 0;
}