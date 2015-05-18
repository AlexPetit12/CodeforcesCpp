//Codeforces
//515A - Drazil and Date

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	long long a, b, s;
	cin >> a >> b >> s;

	if(abs(a) + abs(b) > s)
		cout << "No";
	else if((a + b - s) % 2 == 0)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
