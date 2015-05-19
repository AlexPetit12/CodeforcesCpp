//Codeforces
//431A - Black square

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	string s;
	cin >> a >> b >> c >> d >> s;
	int z[4] = {0};

	for(unsigned int i = 0; i < s.size(); i++)
		z[s[i] - '0' - 1]++;

	cout <<  a * z[0] + b * z[1] + c * z[2] + d * z[3];

	return 0;
}
