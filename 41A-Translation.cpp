//Codeforces
//41A - Translation

#include <iostream>
using namespace std;

int main()
{
	string berland;
	cin >> berland;

	string birland;
	cin >> birland;

	string output = "YES";

	for(unsigned int i = 0; i < berland.size(); i++)
	{
		if(berland[i] != birland[birland.size() - 1 - i])
		{
			output = "NO";
			break;
		}
	}

	cout << output;

	return 0;

}
