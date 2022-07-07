#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

void Star(int x, int y, int N)
{
	if (x % 3 == 1 && y % 3 == 1)
		cout << " ";
	else if (N / 3 == 1)
		cout << "*";
	else
		Star(x / 3, y / 3, N / 3);
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
			Star(x, y, N);

		cout << '\n';
	}

	return 0;
}
