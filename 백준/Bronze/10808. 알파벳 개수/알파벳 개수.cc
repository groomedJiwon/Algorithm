using namespace std;
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

string input;
int alph[26] = { 0, };

int main() {


	cin >> input;

	for (int a = 0; a < 26; a++) {

		for (int i = 0; i < input.length(); i++) {

			if (input[i] == 'a' + a) {
				alph[a]++;
			}
		}
		cout << alph[a] << " ";
	}
	
}