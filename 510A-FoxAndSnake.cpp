//Codeforces
//510A - Fox and snake

#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> n >> m;

	string sharps = "";
	for(int i = 0; i < m; i++)
		sharps += "#";

	string dotsLeft = "#";
	string dotsRight = "";
	for(int i = 0; i < m - 1; i++)
	{
		dotsLeft += ".";
		dotsRight += ".";
	}

	dotsRight += "#";
	int flag = 1;
	for(int i = 0; i < n; i++)
	{
		if(i % 2 == 0)
			cout << sharps << endl;
		else if(flag)
		{
			cout << dotsRight << endl;
			flag = 0;
		}
		else
		{
			cout << dotsLeft << endl;
			flag = 1;
		}
	}

	return 0;
}
