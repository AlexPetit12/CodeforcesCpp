//Codeforces
//349A - Cinema line

#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, m, n;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> m;
		if(m == 25)
			a++;
		else if(m == 50)
		{
			a--;
			b++;
		}
		else if(m == 100)
		{
			(b >= 1 && a >= 1) ? (b -= 1, a -= 1) : a -= 3;
		}
		if(a < 0)
		{
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}

