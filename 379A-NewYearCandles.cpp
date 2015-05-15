//Codeforces
//379A - New year candles

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int total = a;

	while(a/b >= 1)
	{
		total += a/b;
		a = a/b + a % b;
	}

	cout << total;

	return 0;
}
