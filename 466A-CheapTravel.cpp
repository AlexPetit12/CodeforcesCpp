//Codeforces
//466A - Cheap travel

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int a, b, m, n;
	cin >> n >> m >> a >> b;

	a < double (b) / double (m) ? cout << n * a : cout << min(n / m * b + (n % m) * a, n / m * b + b);

	return 0;
}
