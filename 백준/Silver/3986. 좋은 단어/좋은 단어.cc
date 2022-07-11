using namespace std;
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)



int main() {
	
	int count = 0;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {

		string s;
		cin >> s;
		stack<char> stk;

		for (int j = 0; j < s.length(); j++) {
		
			if (stk.size() > 0 && stk.top() == s.at(j)) stk.pop();
			else stk.push(s.at(j));

		
		} if (stk.empty()) count ++ ;
	
	}

	cout << count;
}
