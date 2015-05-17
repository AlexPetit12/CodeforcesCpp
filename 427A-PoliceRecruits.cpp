//Codeforces
//427A - Police recruits

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int m, hired = 0, crimesTotal = 0;

	for(int i = 0; i < n; i++)
	{
		cin >> m;
		if(m > 0)
			hired += m;
		else
		{
			if(hired > 0)
				hired -= 1;
			else
				crimesTotal += 1;
		}
	}

	cout << crimesTotal;

	return 0;
}
