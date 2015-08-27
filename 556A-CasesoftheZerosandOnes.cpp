//Codeforces
//556A - Cases of the Zeros and Ones

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, a = 0, b = 0;
	cin >> n;

	string s;
	cin >> s;

	for(int i = 0; i < n; i++)
		s[i] == '1' ? a++: b++;

	cout << n - min(a, b) * 2;

	return 0;
}
