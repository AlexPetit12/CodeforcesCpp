//Codeforces
//441A - Valera and antique items

#include <iostream>
#include <set>
using namespace std;

int main()
{
	int m, n, u, v;
	cin >> n >> v;

	set<int> s;
	for(int i = 0; i < n; i++)
	{
		cin >> m;
		for(int j = 0; j < m; j++)
		{
			cin >> u;
			if(v > u)
			{
				s.insert(i + 1);
			}
		}
	}

	cout << s.size() << endl;

	for(set<int>::iterator i = s.begin(); i != s.end(); i++)
		cout << *i << " ";

	return 0;
}
