using namespace std;
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)



//아스키코드
//대문자는 65부터 90까지
//소문자는 97부터 122까지

int main() {
	

	int n, m;
	vector<int> arr;
	int count = 0;
	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++) {
		int in;
		cin >> in;
		arr.push_back(in);
	}
	

	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == m) {
				count++;
				continue;
			}
		
		}
	}
	
	cout << count;
}
