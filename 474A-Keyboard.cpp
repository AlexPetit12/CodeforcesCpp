//Codeforces
//474A - Keyboard

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<char> keyboard = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p',
							'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';',
								'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};

	char c; // L or R
	cin >> c;

	string s;
	cin >> s;

	int shift;
	c == 'R' ? shift = -1 : shift = 1;

	vector<char>::iterator it;
	for(unsigned int i = 0; i < s.size(); i++)
	{
		it = find(keyboard.begin(), keyboard.end(), s[i]);
		cout << keyboard[it - keyboard.begin() + shift];
	}

	return 0;
}
