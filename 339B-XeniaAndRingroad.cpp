//Codeforces
//339B - Xenia and Ringroad

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	cin >> n >> m;
	vector<int> v(m);
	for(int i = 0; i < m; i++)
	{
		cin >> v[i];
	}

	long long total = v[0] - 1;
	for(int i = 1; i < m; i ++)
	{
		if(v[i - 1] > v[i])
			total += n - v[i - 1] + v[i];
		else
			total += v[i] - v[i - 1];
	}

	cout << total;

	return 0;
}
