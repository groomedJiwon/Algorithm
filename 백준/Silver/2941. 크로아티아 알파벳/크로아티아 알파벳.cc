#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()

{


    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    
    string input;
    cin >> input;
    int count = 0;

    string crot[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};




        for (int i = 0; i < 8; i++) {
            int idx = input.find(crot[i]);
              while (idx!=- 1) {
            
                  input.replace(idx, crot[i].length(), "_"); 
                  idx = input.find(crot[i]);

                }
        }




        cout << input.length();
    
    return 0;
}
