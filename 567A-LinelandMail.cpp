//Codeforces
//567A - Lineland Mail

#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	vector<long long> v(n);
	for(long long i = 0; i < n; i++)
		cin >> v[i];

	for(long long i = 0; i < n; i++)
	{
		if(i == 0)
		{
			cout << v[1] - v[0] << " " << v[n - 1] - v[0] << endl;
		}
		else if(i == n - 1)
		{
			cout << v[n - 1] - v[n - 2] << " " << v[n - 1] - v[0] << endl;
		}
		else
		{
			long long min_val = min(v[i + 1] - v[i], v[i] - v[i - 1]);
			long long max_val = max(v[n - 1] - v[i], v[i] - v[0]);
			cout << min_val << " " << max_val << endl;
		}
	}

	return 0;
}
