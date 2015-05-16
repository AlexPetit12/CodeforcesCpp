//Codeforces
//448A - Rewards

#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, x, y, z, n;

	scanf("%d %d %d\n", &a, &b, &c); // scan number of cups
	scanf("%d %d %d\n", &x, &y, &z); // scan number of medals
	scanf("%d", &n);

	double totalCups = a + b + c;
	double totalMedals = x + y + z;

	if(ceil(totalCups/5) + ceil(totalMedals/10) > n)
		cout << "NO";
	else
		cout <<"YES";

	return 0;
}
