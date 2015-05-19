//Codeforces
//514A - Chewbacca and number

#include <iostream>
using namespace std;

int main()
{
	string x;
	cin >> x;

	if(x[0] == '9')
	{
		cout << 9;
		for(unsigned int i = 1; i < x.size(); i++)
		{
			if('9' - x[i] < 5)
				cout << '9' - x[i];
			else
				cout << x[i];
		}
	}
	else
	{
		for(unsigned int i = 0; i < x.size(); i++)
		{
			if('9' - x[i] < 5)
				cout << '9' - x[i];
			else
				cout << x[i];
		}
	}

	return 0;
}
