//Codeforces
//560A - Currency System in Geraldion

#include <iostream>
using namespace std;

int main()
{
	int n, a;
	cin >> n;

	for(int i = 0; i < n; i ++)
	{
		cin >> a;
		if(a == 1)
		{
			cout << -1;
			return 0;
		}
	}

	cout << 1;

	return 0;
}
