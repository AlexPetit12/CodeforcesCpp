//Codeforces
//478A - Initial bet

#include <iostream>
using namespace std;

int main()
{
	int v, w, x, y, z;
	int sum = 0;

	cin >> v >> w >> x >> y >> z;
	sum = v + w + x + y + z;
	if(sum == 0)
		cout << -1;
	else if(sum % 5 == 0)
		cout << sum/5;
	else
		cout << -1;

	return 0;
}
