//Codeforces
//469A - I wanna be the guy

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// get little X levels
	int x;
	cin >> x;
	vector<int> vx(x);
	for(int i = 0; i < x; i++)
		cin >> vx[i];

	// get little Y levels
	int y;
	cin >> y;
	vector<int> vy(y);
	for(int i = 0; i < y; i++)
		cin >> vy[i];

	string output = "I become the guy.";
	for(int i = 1; i <= n; i++)
	{
		if(count(vx.begin(), vx.end(), i) == 0 && count(vy.begin(), vy.end(), i) == 0)
		{
			output = "Oh, my keyboard!";
			break;
		}
	}

	cout << output;

	return 0;
}
