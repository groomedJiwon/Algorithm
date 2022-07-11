using namespace std;
#include <bits/stdc++.h>
//#define fastio() ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);




	int n, m, s, e, num;
	int psum[100004];



int main() {

	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	cout.tie(nullptr);
	cin.tie(nullptr);

	psum[0] = 0;

	cin >> n >> m;


	for (int i = 1; i <= n; i++) {

		cin >> num;
		psum[i] = psum[i - 1] + num;
	}
	
	for (int i = 0; i < m; i++) {

		cin >> s >> e;

		cout << psum[e] - psum[s-1]<<"\n";
	
	}

}
