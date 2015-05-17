//Codeforces
//237A - Free cash

#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
	int n, a, b, max = 1, total = 1;
	cin >> n;

	pair<int, int> p, prevPair;
	cin >> a >> b;
	prevPair = make_pair(a, b);

	for(int i = 0; i < n - 1; i++)
	{
		cin >> a >> b;
		p = make_pair(a, b);
		if(p == prevPair)
		{
			total++;
			if(total > max)
				max = total;
		}
		else
		{
			total = 1;
		}

		prevPair = make_pair(p.first, p.second);
	}

	cout << max;

	return 0;
}
