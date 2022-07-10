using namespace std;
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
string input;

int main() {
	cin >> input;
	string a, b;
	int half_len= input.length() / 2;


	
	a = input.substr(0, half_len);
	b = input.substr(input.length() - half_len, half_len);
	reverse(b.begin(), b.end());

	if (a==b) cout << 1;
	else cout << 0;
	
}