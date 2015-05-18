//Codeforces
//25A - IQ test

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v(n);

	for(int i = 0; i < n; i++)
		cin >> v[i];

	bool odd = false;
	if(v[0] % 2 + v[1] % 2 + v[2] % 2 >= 2)
		odd = true;

	for(int i = 0; i < n; i++)
	{
		if(odd && v[i] % 2 == 0)
		{
			cout << i + 1;
			break;
		}

		else if(!odd && v[i] % 2 == 1)
		{
			cout << i + 1;
			break;
		}
	}

	return 0;
}
