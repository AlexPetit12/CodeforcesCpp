//Codeforces
//540A - Combination lock

#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	char i[1000];
	char s[1000];
	scanf("%s", i);
	scanf("%s", s);

	int rotations, total = 0;
	for(int j = 0; j < n; j++)
	{
		rotations = abs((int)(s[j]) - (int)(i[j]));
		total += min(rotations, 10 - rotations);
	}

	cout << total;
	return 0;
}
