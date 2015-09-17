//Codeforces
//515C - Drazil and Factorial

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, c = 0;
	string s;
	vector<int> v;

	cin >> n >> s;

	for(int i = 0; i < n; i++)
	{
		int a = s[i] - '0';
		if(a == 2)
			v.push_back(2);
		else if(a == 3)
			v.push_back(3);
		else if(a == 4)
		{
			v.push_back(2);
			v.push_back(2);
			v.push_back(3);
		}
		else if(a == 5)
			v.push_back(5);
		else if(a == 6)
		{
			v.push_back(3);
			v.push_back(5);
		}
		else if(a == 7)
			v.push_back(7);
		else if(a == 8)
		{
			v.push_back(2);
			v.push_back(2);
			v.push_back(2);
			v.push_back(7);
		}
		else if(a == 9)
		{
			v.push_back(2);
			v.push_back(3);
			v.push_back(3);
			v.push_back(7);
		};
	}

	sort(v.begin(), v.end(), greater<int>());

	for(unsigned int i = 0; i < v.size(); i++)
		cout << v[i];

	return 0;
}
