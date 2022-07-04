#include <iostream>
using namespace std;

int han(int n) {

	int count = 0;

	if (n < 100) return 1;
	else {
		int a, b, c;
		a = n % 10; //1자리수
		b = (n % 100) / 10; //10자리수
		c = n / 100; //100자리수
		if (c - b == b - a) return 1;
	}

	return 0;
}

int main()
{

	int count = 0;

	//n은 1000보다 작거나 같은 자연수
	//1~999
	int n;

	cin >> n;


	//등차수열은 연속된 두개의 수의 차이가 일정함
	// 123 -> 차 1인 수열
	// 222 -> 차 0인 수열
	// 1~99까지는 모두 한수

	for (int i = 1; i <= n; i++) {

		count += han(i);

	}



	cout<<count;





}