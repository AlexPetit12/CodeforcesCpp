//Codeforces
//472A - Learn from math

#include <cmath>
#include <iostream>
using namespace std;

bool isComposite(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return true;
	}

	return false;
}

int main()
{
	int n;
	cin >> n;

	for(int i = 4; i < n; i++)
	{
		if(isComposite(i) && isComposite(n - i))
		{
			cout << i << " " << n - i;
			break;
		}
	}

	return 0;
}
