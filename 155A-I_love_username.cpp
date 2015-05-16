//Codeforces
//155A I love username

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	cin >> v[0];
	int max = v[0], min = v[0], total = 0;
	for(int i = 1; i < n; i++)
	{
		cin >> v[i];
		if(v[i] > max)
		{
			max = v[i];
			total++;
		}
		else if(v[i] < min)
		{
			min = v[i];
			total++;
		}
	}

	cout << total;

	return 0;
}
