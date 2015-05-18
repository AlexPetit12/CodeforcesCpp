//Codeforces
//476A - Dreamoon and stairs

#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> n >> m;

	int output = -1;
	if(n % 2 == 0)
	{
		int k = n/2;
		while(k <= n)
		{
			if(k % m == 0)
			{
				output = k;
				break;
			}
			else
				k++;
		}
	}
	else
	{
		int k = (n - 1)/2 + 1;
		while(k <= n)
		{
			if(k % m == 0)
			{
				output = k;
				break;
			}
			else
				k++;
		}
	}

	cout << output;

	return 0;
}
