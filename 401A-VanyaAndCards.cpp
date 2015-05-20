//Codeforces
//401A - Vanya and cards

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int n, x, z, sum = 0;
	cin >> n >> x;
	for(int i = 0; i < n; i++)
	{
		cin >> z;
		sum += z;
	}

	sum = abs(sum);

	int total = 0;

	while(sum)
	{
		total += sum / x;
		sum = sum % x;
		x -= 1;
	}


	cout << total;

	return 0;
}
