using namespace std;
#include <bits/stdc++.h>


int n;
int m;		
string in;
map<int, string> i_pk;
map<string, int> s_pk;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;



	for (int i = 1; i <= n; i++)
	{
		cin >> in;
		i_pk[i] = in;
		s_pk[in] = i;
	}

	for (int i = 0; i < m; i++) {

		cin >> in;
		//in이 문자열이라면
		//c_str(string을 char로 변환)->atoi(char를 int로변환)
		//했을시 0이 나옴
		//문자열이라면 문자열 value map에서 int를 출력
		if (atoi(in.c_str())==0) {
			cout << s_pk[in] << "\n";
		}
		else
			cout << i_pk[atoi(in.c_str())] << "\n";

	}
	
}
