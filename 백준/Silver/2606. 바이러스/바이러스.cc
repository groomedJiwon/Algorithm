#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> com[101];
bool vis[101];


int dfs(int c) {
	int ret = 1;
	vis[c] = true; 

	for (int i = 0; i < com[c].size(); i++) {
		if (vis[com[c][i]] != true) ret+=dfs(com[c][i]);

	}

	
	return ret;
	
}

int main() {
	cin.tie(NULL);

	int n, m;

	cin >> n;
	cin >> m;

	int c1, c2;
	for (int i = 0; i < m; i++) {
		cin >> c1 >> c2;
		com[c1].push_back(c2);
		com[c2].push_back(c1);
	}
	cout<<dfs(1)-1;
	

	cin.tie(NULL);


}