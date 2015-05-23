//Codeforces
//455A - Boredom

#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, t;
	cin >> n;
	vector<long long> v(100005), w(100005);
	for(int i = 0; i < n; i++)
	{
		cin >> t;
		v[t] += t;
	}

	w[0] = 0;
	w[1] = v[1];
	for(int i = 2; i <= 100000; i++)
	{
		w[i] = max(w[i - 1], v[i] + w[i - 2]);
	}

	cout << w[100000];

	return 0;
}
