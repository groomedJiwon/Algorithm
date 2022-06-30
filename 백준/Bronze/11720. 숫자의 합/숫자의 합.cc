#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()

{
    int n;
    
    cin >> n;

    int sum = 0;


    
        string s;
        cin >> s;

        for (int j = 0; j < s.length(); j++) {
        
            sum+=(s[j]-'0');
        
        }
    
    
    
    
    

    cout << sum;
    



    return 0;
}
