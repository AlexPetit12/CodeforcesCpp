//Codeforces
//208A - Dubstep

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin >> s;

	size_t pos = s.find("WUB");
	vector<string> v;
	if(pos == 0) // if the string starts with "WUB"
	{
		s = s.substr(3, s.size() - 1);
	}
	else if(pos == string::npos) // if the string does not contain a "WUB"
	{
		cout << s;
		return 0;
	}
	else // if the string does not start with "WUB"
	{
		v.push_back(s.substr(0, pos));
		s = s.substr(pos + 3, s.size() - 1);
	}

	while(true)
	{
		pos = s.find("WUB");
		if(pos != string::npos)
		{
			v.push_back(s.substr(0, pos));
			s = s.substr(pos + 3, s.size() - 1);
		}
		else
		{
			v.push_back(s);
			break;
		}
	}

	// print results
	for(auto & str : v)
		cout << str << " ";

	return 0;
}
