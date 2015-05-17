//Codeforces
//461A - Appleman and Toastman

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	vector<long> v(n);
	for(long long i = 0; i < n; i++)
		cin >> v[i];

	unsigned long long total = 0;
	sort(v.begin(), v.end());

	for(long long i = 0; i < n - 1; i++)
		total += v[i] * (i + 2);

	total += v[n - 1] * n;

	cout << total;

	return 0;
}
