//Codeforces
//82A - Double cola

#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

	int power = 1;
	while(n > 5 * power)
	{
		n -= 5 * power;
		power *= 2;
	}

	cout << names[ceil(n/(double)power) - 1];

	return 0;
}
