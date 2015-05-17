//Codeforces
//471A - Muh and sticks

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m;
	vector<int> v(9);

	for(int i = 0; i < 6; i++)
	{
		cin >> m;
		v[m - 1]++;
	}

	string output = "Alien";
	bool foundFourLegs = false;
	bool elephantPossible = false;
	for(int i = 0; i < 9; i++)
	{
		if(v[i] == 6)
		{
			output = "Elephant";
			break;
		}
		else if(v[i] == 5)
		{
			output = "Bear";
			break;
		}
		else if(v[i] == 4)
		{
			foundFourLegs = true;
		}
		else if(v[i] == 2)
		{
			elephantPossible = true;
		}
	}

	if(foundFourLegs && elephantPossible)
	{
		output = "Elephant";
	}
	else if(foundFourLegs)
	{
		output = "Bear";
	}

	cout << output;

	return 0;
}
