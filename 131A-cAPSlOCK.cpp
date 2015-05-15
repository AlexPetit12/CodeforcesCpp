//Codeforces
//131A - cAPSlOCK

#include <cctype>
#include <iostream>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	bool firstLetterIsLower = islower(s[0]);

	string temp = "";

	if(firstLetterIsLower)
	{
		temp += toupper(s[0]);
		for(int i = 1; i < s.size(); i++)
		{
			if(isupper(s[i]))
			{
				temp += (char)tolower(s[i]);
			}
			else
			{
				temp = s;
				break;
			}
		}
	}
	else
	{
		for(int i = 0; i < s.size(); i++)
		{
			if(isupper(s[i]))
			{
				temp += (char)tolower(s[i]);
			}
			else
			{
				temp = s;
				break;
			}
		}
	}

	cout << temp;

	return 0;
}


