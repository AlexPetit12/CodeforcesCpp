//Codeforces
//450A - Jzzhu and children

#include <iostream>
using namespace std;

int main()
{
	int a, m, n, pos, max = 0;
	cin >> n >> m;
	for(int i = 1; i < n + 1; i++)
	{
		cin >> a;
		if(a % m == 0)
		{
			if(a / m >= max)
			{
				max = a / m;
				pos = i;
			}
		}
		else
		{
			if(a / m + 1 >= max)
			{
				max = a / m + 1;
				pos = i;
			}
		}
	}

	cout << pos;

	return 0;
}
