//Codeforces
//149A - Business trip

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int k;
	cin >> k;

	int total = 0;
	vector<int> v(12);
	for(int i = 0; i < 12; i++)
	{
		cin >> v[i];
		total += v[i];
	}

	if(total < k)
	{
		cout << -1;
	}
	else
	{
		sort(v.begin(), v.end());

		int nbrMonths = 0, totalCM = 0, j = 11;
		while(totalCM < k)
		{
			totalCM += v[j];
			nbrMonths++;
			j--;
		}
		cout << nbrMonths;
	}

	return 0;
}
