//Codeforces
//467A - George and accomodation

#include <cstdio>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	int p, q, roomsAvailable = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &p, &q);
		if(q - p >= 2)
			roomsAvailable++;
	}

	printf("%d", roomsAvailable);

	return 0;
}
