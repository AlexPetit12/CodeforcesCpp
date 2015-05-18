//Codeforces
//230A - Dragons

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool sort_pred(const pair<int ,int>& left, const pair<int ,int>& right)
{
	return left.first < right.first;
}

int main()
{
	int n, s;
	cin >> s >> n;
	vector<pair<int, int>> vsb; // <strength, bonus> pairs vector

	int a, b;
	for(int i = 0; i < n; i++)
	{
		cin >> a >> b;
		vsb.push_back(make_pair(a, b));
	}

	sort(vsb.begin(), vsb.end(), sort_pred);

	string output = "YES";
	for(int i = 0; i < n; i++)
	{
		if(s > vsb[i].first)
		{
			s += vsb[i].second;
		}
		else
		{
			output = "NO";
			break;
		}
	}

	cout << output;

	return 0;
}
