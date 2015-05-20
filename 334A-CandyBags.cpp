//Codeforces
//334A - Candy bags

#include <iostream>
using namespace std;

int main()
{
	int j, n; cin >> n;
	for(int i = 1; i <= n; i++)
	{
		j = i;
		while(j <= (n * n) / 2)
		{
			cout << j << " " << n * n - j + 1 << " ";
			j += n;
		}

		cout << endl;
	}
	return 0;
}
