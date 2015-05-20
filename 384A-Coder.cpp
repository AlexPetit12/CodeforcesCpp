//Codeforces
//384A - Coder

#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	if(n % 2 == 0)
		cout << n * n / 2 << endl;
	else
		cout << (n + 1) / 2 * (n + 1) / 2 + (n - 1) / 2 * (n - 1) / 2 << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			(i + j) % 2 ? cout << "." : cout << "C";
		}

		cout << endl;
	}
	return 0;
}
