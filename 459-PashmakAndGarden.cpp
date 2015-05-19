//Codeforces
//459A - Pashmak and garden

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int sideLength = max(abs(y2 - y1), abs(x2 - x1));

	if((abs(y2 - y1) == abs(x2 - x1)))
	{
		cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
	}
	else if(x1 == x2)
		cout << x1 + sideLength << " " << y1 << " " << x2 + sideLength << " " << y2 << endl;
	else if(y1 == y2)
		cout << x1 << " " << y1 + sideLength << " " << x2 << " " << y2 + sideLength << endl;

	else
		cout << -1;


	return 0;
}
