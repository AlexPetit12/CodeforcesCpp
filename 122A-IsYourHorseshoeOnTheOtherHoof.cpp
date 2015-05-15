//Codeforces
//122A - Is your horseshoe on the other hoof?

#include <cstdio>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0; //horseshoe numbers

	scanf("%d %d %d %d", &a, &b, &c, &d);

	int total = 0;

	if(a == b || a == c || a == d)
		total++;

	if(b == c || b == d)
		total++;

	if(c == d)
		total++;

	printf("%d", total);

	return 0;
}
