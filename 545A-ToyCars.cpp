//Codeforces
//545A - Toy Cars

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, n, count = 0;
	cin >> n;

	vector<int> cars(n, 0);

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a;
			if(a == 1)
				cars[i]++;
			else if(a == 2)
				cars[j]++;
			else if(a == 3)
			{
				cars[i]++;
				cars[j]++;
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(cars[i] == 0)
			count++;
	}

	cout << count << endl;

	for(int i = 0; i < n; i++)
	{
		if(cars[i] == 0)
			cout << i + 1 << " ";
	}

	return 0;
}
