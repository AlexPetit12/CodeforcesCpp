//Codeforces
//158B - Taxi

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int nbrGroups;
	cin >> nbrGroups;


	int n;
	vector<int> vg;

	for(int i = 0; i < nbrGroups; i++)
	{
		cin >> n;
		vg.push_back(n);
	}

	int nbrOne = count(vg.begin(), vg.end(), 1);
	int nbrTwo = count(vg.begin(), vg.end(), 2);
	int nbrThree = count(vg.begin(), vg.end(), 3);
	int nbrFour = count(vg.begin(), vg.end(), 4);

	int total = 0;

	if(nbrThree == nbrOne)
	{
		total = nbrOne + ceil(nbrTwo/2.0) + nbrFour;
	}
	else if(nbrOne > nbrThree)
	{
		total = ceil((nbrOne - nbrThree + 2 * nbrTwo)/4.0) + nbrThree + nbrFour;
	}
	else
	{
		total = nbrOne + (nbrThree - nbrOne) + ceil(nbrTwo/2.0) + nbrFour;
	}

	cout << total;

	return 0;
}
