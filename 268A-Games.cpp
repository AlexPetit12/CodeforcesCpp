//Codeforces
//268A - Games

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n; // number of teams
	cin >> n;

	vector<int> vh(n), vg(n); // home uniforms and guest uniforms

	int total = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> vh[i] >> vg[i];

		for(int j = 0; j < i; j++)
		{
			if(vh[i] == vg[j])
				total++;
			if(vh[j] == vg[i])
				total++;
		}

	}

	cout << total;
	return 0;
}
