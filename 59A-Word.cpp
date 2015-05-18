//Codeforces
//59A - Word

#include <iostream>
#include <locale>
using namespace std;

int main()
{
	int lower = 0, upper = 0;
	string s;
	cin >> s;
	for(unsigned int i = 0; i < s.size(); i++)
	{
		if(islower(s[i]))
			lower++;
		else
			upper++;
	}

	locale loc;
	if(upper > lower)
	{
		for(char &c : s)
		{
			cout << toupper(c, loc);
		}
	}
	else
	{
		for(char &c : s)
		{
			cout << tolower(c, loc);
		}
	}

	return 0;
}
