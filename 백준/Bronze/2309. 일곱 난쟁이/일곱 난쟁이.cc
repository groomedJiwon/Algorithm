using namespace std;
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

	vector<int> arr;

void print() {
	sort(arr.begin(), arr.end());

	for (int i = 2; i < arr.size(); i++) {
		cout << arr.at(i) << "\n";
	}

}

int main() {
	int sum = 0;


	for (int i = 0; i < 9; i++) {

		int t;
		cin >> t;
		arr.push_back(t);
		sum += t;
	
	}
	

	for (int i = 0; i < 9; i++) {
	
		for (int j = i+1; j < 9; j++) {
			if (arr.at(i) + arr.at(j) == (sum-100)) {
				arr.at(i) = 0; arr.at(j) = 0;
				print();
				return 0;
			}
			
		
		}

	}


	
}