#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main()

{


    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    
    int alphabet[26] = { -1 };
  

    string alph = "abcdefghijklmnopqrstuvwxyz";

    string input;
    cin >> input;

    for (int i = 0; i < alph.length(); i++) {
    
        //(int)로 출력해주어야
        //인덱스가 없을 시 -1이 출력됨
        //(int) 지정 안할 시 18446744073709551615 가 출력

        cout << (int)input.find_first_of(alph[i]) << " ";
    }


    return 0;
}