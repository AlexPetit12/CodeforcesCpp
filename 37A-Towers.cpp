//Codeforces
//37A - Towers

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int d = 0, n, x;
	cin >> n;

	vector<int> v(1001);

	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(v[x] == 0)
			d++;
		v[x]++;
	}

	sort(v.begin(), v.end());

	cout << *max_element(v.begin(), v.end()) << " " << d;

	return 0;
}
