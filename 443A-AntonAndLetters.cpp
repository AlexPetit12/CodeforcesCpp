//Codeforces
//443A - Anton and letters

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	if(s == "{}")
	{
		cout << 0;
		return 0;
	}

	vector<char> v;
	int total = 0; // total of different letters
	for(unsigned int i = 1; i < s.size(); i += 3)
	{
		if(count(v.begin(), v.end(), s[i]) == 0)
		{
			total += 1;
			v.push_back(s[i]);
		}
	}

	cout << total;

	return 0;
}
