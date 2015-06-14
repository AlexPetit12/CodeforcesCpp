//Codeforces
//467B - Fedor and new game

#include <bitset>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m, k, a[1001], r = 0;
	cin >> n >> m >> k;

	for(int i = 0; i < m + 1; i++)
		cin >> a[i];;

	for(int i = 0; i < m; i++)
	{
		if(__builtin_popcount(a[i] ^ a[m]) <= k)
			r++;
	}

	cout << r;

	return 0;
}
