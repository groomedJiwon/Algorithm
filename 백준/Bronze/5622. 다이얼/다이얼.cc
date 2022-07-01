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


    
    for (int i = 0; i < input.length(); i++) {

        //A : 65

       
        if (input[i] >= 'A' && input[i] <= 'C')
            count += 3;
        else if (input[i] >= 'D' && input[i] <= 'F')
            count += 4;
        else  if (input[i] >= 'G' && input[i] <= 'I')
            count += 5;
        else if (input[i] >= 'J' && input[i] <= 'L')
            count += 6;
        else if (input[i] >= 'M' && input[i] <= 'O')
            count += 7;
        else if (input[i] >= 'P' && input[i] <= 'S')
            count += 8;
        else if (input[i] >= 'T' && input[i] <= 'V')
            count += 9;
        else if (input[i] >= 'W' && input[i] <= 'Z')
            count += 10;

        
    
    }
 
    cout << count;
    
    return 0;
}
