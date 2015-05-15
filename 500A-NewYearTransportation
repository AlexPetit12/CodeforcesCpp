//Codeforces
//500A - New year transportation

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;

	// gets the steps
	vector<int> v;
	int steps;
	for(int i = 0; i < n - 1; i++)
	{
		cin >> steps;
		v.push_back(steps);
	}

	string msg = "NO";

	int total = 1;
	while(total <= t)
	{
		total += v[total - 1];
		if(total == t)
		{
			msg = "YES";
			break;
		}
	}

	cout << msg;

	return 0;
}
