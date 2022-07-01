#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()

{


    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    
    string input;
    getline(cin, input, '\n');

    int count = 0;

    if (input[0] == ' ') count -=1;
    if (input[input.length()-1] == ' ') count -= 1;


    for (int i = 0; i < input.length(); i++)
    {
        
        if (input[i] == ' ') { 
            count++;
             }
   
    }


    cout << count + 1;

    return 0;
}
