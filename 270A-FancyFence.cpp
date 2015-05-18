//Codeforces
//270A - Fancy fence

#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<double> v(n);
	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for(unsigned int i = 0; i < v.size(); i++)
	{
		if(v[i] == 180)
			cout << "NO" << endl;
		else if(floor(360.0 / (180.0 - v[i])) == 360.0 / (180.0 - v[i]))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
