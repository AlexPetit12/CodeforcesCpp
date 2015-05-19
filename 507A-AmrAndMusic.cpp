//Codeforces
//507A - Amr and music

#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

bool sort_pred(const pair<int, int>& left, const pair<int, int> &right)
{
	return left.second < right.second;
}

int main()
{
	int k, n;
	cin >> n >> k;
	vector<pair<int, int>> v(n);
	int a;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		v[i] = make_pair(i + 1, a);
	}

	sort(v.begin(), v.end(), sort_pred);

	int total = 0, i = 0;
	if(v[0].second <= k)
	{
		while(total + v[i].second <= k)
		{
			total += v[i].second;
			i++;

			if(total == k || i == n)
				break;
		}

		if(i != 0)
			cout << i << endl;

		for(int j = 0; j < i; j++)
		{
			cout << v[j].first << " ";
		}
	}
	else
		cout << 0;

	return 0;
}
