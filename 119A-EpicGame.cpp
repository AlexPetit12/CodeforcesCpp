//Codeforces
//119A - Epic game

#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int greatestCommonDiv(int a, int b)
{
	int minimum = min(a, b);
	int maximum = max(a, b);

	if(minimum == 0)
		return maximum;
	else if(maximum == 0)
		return minimum;

	int greatestCommonDiv = 1;

	for(int i = 1; i < minimum + 1; i++)
	{
		if(minimum % i == 0 && maximum % i == 0)
			greatestCommonDiv = i;
	}

	return greatestCommonDiv;
}

int main()
{
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);

	int position = 0; //even position is Simon
	int toRemove = greatestCommonDiv(a, n);

	while(toRemove <= n)
	{
		position++;
		n -= toRemove;

		if(position % 2 == 0)
			toRemove = greatestCommonDiv(a, n);
		else
			toRemove = greatestCommonDiv(b, n);

	}

	if(position % 2 == 0)
		cout << 1;
	else
		cout << 0;

	return 0;
}
