//Codeforces
//450A - System of equations

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int m, n, total = 0;
	cin >> n >> m;
	for(int i = 0; i <= max(m, n); i++)
	{
		for(int j = 0; j <= max(m, n); j++)
		{
			if(i * i + j == n && i + j * j == m)
				total++;
		}
	}

	cout << total;

	return 0;
}
