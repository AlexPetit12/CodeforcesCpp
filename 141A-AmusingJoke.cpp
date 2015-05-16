//Codeforces
//141A - Amusing joke

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	string NYname, CMname; // New Year name and Christmas Men name
	string lettersPile;

	cin >> NYname >> CMname >> lettersPile;

	string s = NYname + CMname; // concatenate both names into only one name

	if(s.size() != lettersPile.size())
	{
		cout << "NO";
		return 0;
	}
	else
	{
		for(unsigned int i = 0; i < s.size(); i++) // compare if both strings contain same number of each character
		{
			if(count(s.begin(), s.end(), s[i]) != count(lettersPile.begin(), lettersPile.end(), s[i]))
			{
				cout << "NO";
				return 0;
			}
		}
	}

	cout << "YES";

	return 0;
}
