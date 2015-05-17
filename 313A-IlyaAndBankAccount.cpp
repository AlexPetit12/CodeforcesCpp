//Codeforces
//313A - Ilya and bank account

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	if(n >= 0)
		cout << n;
	else if(n / 10 > n / 100 * 10 + (n % 10))
		cout << n / 10;
	else
		cout << n / 100 * 10 + (n % 10);

	return 0;
}
