//Codeforces
//460A - Vasya and socks

#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int total = n;

	while(n/m >= 1)
	{
		total += n/m;
		n = n/m + n % m;
	}

	cout << total;

	return 0;
}
