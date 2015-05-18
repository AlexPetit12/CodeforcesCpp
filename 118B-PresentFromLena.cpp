//Codeforces
//118B - Present from Lena

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n + 1; i++)
	{

		for(int j = 0; j < 2 * (n - i); j++)
			cout << " ";

		for(int j = 0; j < 2 * i + 1; j++)
		{
			if(j % 2 == 1)
				cout << " ";
			else
			{
				cout << j / 2;
			}
		}
		for(int j = 2 * i - 1; j >= 0; j--)
		{
			if(j % 2 == 1)
				cout << " ";
			else
			{
				cout << j / 2;
			}
		}

		cout << endl;
	}

	for(int i = n - 1; i >= 0; i--)
	{

		for(int j = 0; j < 2 * (n - i); j++)
			cout << " ";

		for(int j = 0; j < 2 * i + 1; j++)
		{
			if(j % 2 == 1)
				cout << " ";
			else
			{
				cout << j / 2;
			}
		}
		for(int j = 2 * i - 1; j >= 0; j--)
		{
			if(j % 2 == 1)
				cout << " ";
			else
			{
				cout << j / 2;
			}
		}

		cout << endl;
	}

	return 0;
}
