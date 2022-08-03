#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int n, m;

//순서가 있으면 순열(next_permutation)
//순서가 없으면 조합(combi)

int main() {


	cin >> n >> m;

	vector<int> v;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			v.push_back(i);
		}	
	}

	do {

		for (int i = 0; i < m; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";

		reverse(v.begin() + m, v.end());
	
	
	} while (next_permutation(v.begin(), v.end()));


}