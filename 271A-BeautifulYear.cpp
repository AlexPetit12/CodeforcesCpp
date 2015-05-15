//Codeforces
//271A - Beautiful year

#include <iostream>
using namespace std;

bool isBeautiful(int n)
{
	int w = n % 10;
	int x = (n / 10) % 10;

	if(w == x)
		return false;

	int y = (n / 100) % 10;

	if(w == y || x == y)
		return false;

	int z = (n / 1000) % 10;

	if(w == z || x == z || y == z)
		return false;

	return true;
}

int main()
{
	int year;
	cin >> year;

	while(!isBeautiful(++year));

	cout << year;

	return 0;
}
