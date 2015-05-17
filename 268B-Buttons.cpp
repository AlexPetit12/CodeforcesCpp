//Codeforces
//268B - Buttons

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if(n == 1)
	{
		cout << 1;
		return 0;
	}

	int total = 1 + n, i = 2;
	while(i < n)
	{
		total += (n - i)* i + 1;
		i++;
	}

	cout << total;

	return 0;
}
