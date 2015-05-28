//Codeforces
//519B - A and B and compilation errors

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> u(n);
	vector<int>	v(n);
	vector<int> w(n);
	vector<int> d1;
	vector<int> d2;

	for(int i = 0; i < n; i++) { cin >> u[i]; }
	for(int i = 0; i < n - 1; i++) { cin >> v[i]; }
	for(int i = 0; i < n - 2; i++) { cin >> w[i]; }

	sort(u.begin(), u.end());
	sort(v.begin(), v.end());
	sort(w.begin(), w.end());

	set_difference(u.begin(), u.end(), v.begin(), v.end(), inserter(d1, d1.begin()));
	set_difference(v.begin(), v.end(), w.begin(), w.end(), inserter(d2, d2.begin()));

	cout << d1[0] << endl << d2[0];

	return 0;
}
