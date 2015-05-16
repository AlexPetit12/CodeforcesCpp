//Codeforces
//492A - Vanya and cubes

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	long long int total = 0;
	int i = 1;
	while(total <= n)
	{
		total += i * (i + 1)/2;
		i++;
	}

	if(total == n)
		cout << i - 1;
	else
		cout << i - 2;

	return 0;
}
