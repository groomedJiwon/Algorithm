#include <iostream>
using namespace std;

int main(){
    
    cin.tie(NULL);
	//cin으로 데이터를 읽을 떄 출력 버퍼의 내용을 비우지 않고 입력을 받는다
	ios::sync_with_stdio(false);
	//버퍼를 분리한다

    
    int n;
    int cycle=0;
   
    cin>>n;
    
    int c=n;

    
    while(1){
        int a, b;
        a=c/10; b=c%10;
        int sum = a + b;
        c=(b*10)+(sum%10);
        cycle++;
        if(n==c) break;
        
    }
    
    cout<<cycle;
    return 0;
}