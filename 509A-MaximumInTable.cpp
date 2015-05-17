//Codeforces
//509A - Maximum in table

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[n][n];
	a[0][0] = 1;
	for(int i = 1; i < n; i++)
	{
		a[0][i] = 1;
		a[i][0] = 1;
		for(int j = 1; j < i; j++)
		{
			a[i][j] = a[i][j - 1] + a[i - 1][j];
			a[j][i] = a[i][j];
		}
		a[i][i] = 2 * a[i][i - 1];
	}

	cout << a[n - 1][n - 1];

	return 0;
}
