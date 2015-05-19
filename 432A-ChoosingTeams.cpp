//Codeforces
//432A - Choosing teams

#include <iostream>
using namespace std;

int main()
{
	int k, n, x;
	cin >> n >> k;
	int a[6] = {0};

	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x + k <= 5)
			a[x]++;
	}

	int sum = 0, rest = 0;
	for(int i = 0; i < 6; i++) sum += a[i] / 3, rest += a[i] % 3;
	sum += rest/3;

	cout << sum;

	return 0;
}
