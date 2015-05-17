//Codeforces
//471A - Muh and sticks

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m;
	vector<int> v(6);

	for(int i = 0; i < 6; i++)
	{
		cin >> m;
		v[m]++;
	}

	bool foundFourLegs = false;
	bool elephantPossible = false;
	bool bearHeadPossible = false;
	bool bearBodyPossible = false;

	for(int i = 0; i < 6; i++)
	{
		if(v[i] == 4)
			foundFourLegs = true;
		else if(v[i] == 2)
			elephantPossible = true;
		else if(v[i] == 1 && !bearHeadPossible)
			bearHeadPossible = true;
		else if(v[i] == 1 && bearHeadPossible)
			bearBodyPossible = true;
	}

	string output = "Alien";
	if(foundFourLegs)
	{
		if(elephantPossible)
			output = "Elephant";
		else if(bearHeadPossible && bearBodyPossible)
			output =  "Bear";
	}

	cout << output;

	return 0;
}
