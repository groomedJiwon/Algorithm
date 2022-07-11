using namespace std;
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int t;
int n;	
string dress, type;
map<string, int> closet;

int main() {


	cin >> t;



	while (t) {

		cin >> n;

		for (int i = 0; i < n; i++){
		
			cin >> dress >> type;

			closet[type]++;

			
		
		}



		//map 순회
		int sum = 1;
		for (auto c : closet) {
			sum = sum * (c.second + 1);

		}

		cout << sum - 1<<"\n";
		closet.clear();

		t--;
	}

}
