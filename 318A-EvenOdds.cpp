//Codeforces
//318A - Even odds

#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	long long int k, n;
	scanf("%lld %lld", &n, &k);

	if(k - (long long int)ceil(double(n)/2) == 0 && n % 2 == 1)
				cout << n;
	else if(k - (long long int)ceil(double(n)/2) == 0)
		cout << 2 * k - 1;
	else if(k <= n/2)
		cout << 2 * k - 1;
	else
		cout << (k - (long long int)(ceil(double(n)/2))) * 2;

	return 0;
}

