#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream iis(line);

	double n;
	iis >> n;

	double m;
	iis >> m;

	double a;
	iis >> a;

	cout << fixed << (long long)(ceil(n/a) * ceil(m/a));
	return 0;
}
