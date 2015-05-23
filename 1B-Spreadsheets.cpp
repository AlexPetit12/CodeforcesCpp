//Codeforces
//1B - Spreadsheets

#include <cstdio>
#include <string>
using namespace std;

string conv(int a) {
	if (a == 0)
		return "";

	return conv((a - 1) / 26) + (char)('A' + (a - 1) % 26);
}

int main() {
	int n;
	scanf("%d", &n);

	for(int i = 0; i < n ; i++)
	{
		int a,b;
		char c[20];
		scanf("%s", c);
		if (sscanf(c, "R%dC%d", &a, &b) == 2)
			printf("%s%d\n", conv(b).c_str(), a);
		else
		{
			int i;b=0;
			for(i = 0; c[i] > '9' ; i++)
				b = b * 26 + 1 + c[i] - 'A';

			sscanf(c + i, "%d", &a);
			printf("R%dC%d\n", a, b);
		}
	}

	return 0;
}
