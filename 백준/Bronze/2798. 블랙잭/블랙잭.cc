#include <iostream>
#include <vector>

using namespace std;
	
	vector<int> v;
	vector<vector<int>> comb;
	int m = 3;

//n개중에서 3개를 뽑는 경우?

	void combi(int start, vector<int>card) {

		if (v.size() == m) {

			comb.push_back(v);
			
			return;
		}

		for (int i = start + 1; i < card.size(); i++ ) {
			v.push_back(card[i]);
			combi(i, card);
			v.pop_back();
		}
	
	
	}


int main() {

	int n, k;
	vector<int> card;

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		card.push_back(c);

	}

	combi(-1, card);

	int mx = -1;

	for (int i = 0; i < comb.size(); i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum+=comb[i][j];
		
		}
		if (sum <= k)  mx = max(mx, sum); 
	
	}

	cout << mx;
}