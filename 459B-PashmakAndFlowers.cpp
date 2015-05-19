//Codeforces
//459B - Pashmak and flowers

#include <algorithm>
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

	sort(v.begin(), v.end());

	long long min = v[0];
	long long max = v[n - 1];
	long long difference = max - min;
	long long nbrMin = count(v.begin(), v.end(), min);
	long long nbrMax = count(v.begin(), v.end(), max);

	long long combs = nbrMin * nbrMax;
	if(min == max)
		combs = 0.5 * (nbrMax - 1) * nbrMax;

	cout << difference << " " << combs;

	return 0;
}
