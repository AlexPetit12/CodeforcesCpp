//Codeforces
//327A - Flipping game

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int n, c = 0, t = 0, sum = 0;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
		if(a[i] == 0)
			c++;
		else if(c > 0)
			c--;
		t = max(c , t);
	}

	if(t == 0)
		t--;

	cout << sum + t;

	return 0;
}
