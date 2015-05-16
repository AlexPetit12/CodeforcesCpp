//Codeforces
//337A - Puzzles

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	cin >> n >> m;

	vector<int> v(m);
	for(int i = 0; i < m; i++)
		cin >> v[i];

	sort(v.begin(), v.end());


	int diff = v[n - 1] - v[0]; // stores difference A-B
	int i = 1, temp;
	while(i + n  <= v.size())
	{
		temp = v[i + n - 1] - v[i];
		if(temp < diff)
		{
			diff = temp;
		}
		i++;
	}

	cout << diff;

	return 0;
}
