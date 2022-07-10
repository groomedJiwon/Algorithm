using namespace std;
#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

int n;
int k;
int t;
int arr[100004];
int psum[100004];

int main() {

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
	
		cin >> arr[i];
		psum[i] = psum[i - 1] + arr[i];
	}

	int sum = -10000004;
	for (int i = 0; i <= n-k; i++) {
		sum=(sum < psum[i + k] - psum[i])? psum[i + k] - psum[i]:sum;
	}

	cout << sum;

}
