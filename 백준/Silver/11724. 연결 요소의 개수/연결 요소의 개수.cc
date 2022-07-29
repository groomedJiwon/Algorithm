#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> g[1002];
bool visited[1002];
int n, m; 

void dfs(int d) {
	visited[d] = true;
	for (int i = 0; i < g[d].size(); i++) {
		if (visited[g[d][i]] != true) dfs(g[d][i]);
	}


}

int main() {


	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		
		g[u].push_back(v);
		g[v].push_back(u);
	}

	int ret = 0;
	for (int i = 1; i <= n; i++) {
		if (visited[i] != true) {
			ret++; dfs(i);
		}
	}

	cout << ret;
}
