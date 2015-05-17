//Codeforces
//502A - Pangram

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	vector<int> v(26);
	string output = "YES";
	if(n < 26)
		output = "NO";
	else
	{
		for(int i = 0; i < n; i++)
		{
			v['z' - tolower(s[i])]++;
		}

		for(int i = 0; i < 26; i++)
		{
			if(v[i] == 0)
			{
				output = "NO";
				break;
			}
		}
	}

	cout << output << endl;

	return 0;
}
