//Codeforces
//492B - Vanya and Lanters

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, l;
	cin >> n >> l;

	vector<int> v(n);

	for(int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	int distance, d = 2 * max(v[0], l - v[n - 1]);
	for(int i = 0; i < n - 1; i++)
	{
		distance = v[i + 1] - v[i];
		if(distance > d)
			d = distance;
	}

	cout << setprecision(9) << double(d) / 2;

	return 0;
}
