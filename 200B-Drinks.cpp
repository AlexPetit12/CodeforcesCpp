//Codeforces
//200B - Drinks

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	double a, n;
	cin >> n;

	double total = n, sum = 0;

	for(int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
	}


	cout << fixed << setprecision(12) << sum/total;

	return 0;
}
