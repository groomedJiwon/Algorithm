using namespace std;
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)


int main() {
	int n;
	cin >> n;
	int arr[26] = { 0, };

	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;

		arr[name.at(0) - 'a']++;
	
	}
	
	string s;

	for (int i = 0; i < 26; i++) {
		if (arr[i] >= 5) s=s+char(i + 'a');
	}

	if (s.empty()) cout << "PREDAJA";
	else cout << s;
}