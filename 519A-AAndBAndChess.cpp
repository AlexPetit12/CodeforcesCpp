//Codeforces
//519A - A and B and chess

#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<char, int> weights;
	weights['p'] = 1; weights['n'] = 3; weights['b'] = 3; weights['r'] = 5, weights['q'] = 9, weights['k'] = 0;

	string s = "";
	string l;
	for(int i = 0; i < 8; i++)
	{
		cin >> l;
		s += l;
	}

	int totalWhite = 0, totalBlack = 0;
	for(unsigned int i = 0; i < s.size(); i++)
	{
		if(s[i] != '.')
		{
			if(isupper(s[i]))
				totalWhite += weights[tolower(s[i])];
			else
				totalBlack += weights[s[i]];
		}
	}

	if(totalWhite == totalBlack)
		cout << "Draw";
	else
		totalWhite > totalBlack ? cout << "White" : cout << "Black";

	return 0;
}
