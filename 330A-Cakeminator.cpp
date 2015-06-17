//Codeforces
//330A - Cakeminator

#include <iostream>
#include <set>
using namespace std;

int main()
{
	int c, r;
	char x;
	set<int> s, t;

	cin >> r >> c;

	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cin >> x;
			if(x == 'S')
			{
				s.insert(i);
				t.insert(j);
			}
		}
	}

	cout << c * r - s.size() * t.size();

	return 0;
}
