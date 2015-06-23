//Codeforces
//472B - Design tutorial: learn from life

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int k, n, t = 0, a[2005];

	cin >> n >> k;

	for(int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);

	for(int i = n - 1; i >= 0; i -= k)
		t += 2 * (a[i] - 1);

	cout << t;

	return 0;
}
