//Codeforces
//330A - GukiZ and Contest

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int n, x;
	cin >> n;
	map<int, int> qty;
	vector<int> entries(n);
	vector<int> output(n);

	// read values, store them in a vector and in a map
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		entries[i] = x;
		if(qty.find(x) == qty.end())
			qty[x] = 1;
		else
			qty[x]++;
	}

	int total = 0, pos = 1;
	while(!qty.empty())
	{
		int max_entry = qty.rbegin()->first;
		for(int i = 0; i < n; i++)
		{
			if(entries[i] == max_entry)
			{
				output[i] = pos;
				total++;
			}
		}

		qty.erase(max_entry);
		pos = pos + total;
		total = 0;
	}

	// print result
	for(int i = 0; i < n; i++)
		cout << output[i] << " ";

	return 0;
}
