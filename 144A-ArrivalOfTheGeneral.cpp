//Codeforces
//144A - Arrival of the general

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int numSoldiers;
	cin >> numSoldiers;

	vector<int> vHeights;
	int height;
	for(int i = 0; i < numSoldiers; i++)
	{
		cin >> height;
		vHeights.push_back(height);
	}

	vector<int>::iterator maxIt = max_element(vHeights.begin(), vHeights.end());
	int maxPos = maxIt - vHeights.begin();

	reverse(vHeights.begin(), vHeights.end()); // To find the smallest height that has the highest index

	vector<int>::iterator minIt = min_element(vHeights.begin(), vHeights.end());
	int minPos = vHeights.end() - minIt - 1;

	int numSwaps = 0;

	if(maxPos > minPos)
		numSwaps = maxPos + (vHeights.size() - 1 - minPos) - 1 ;
	else
		numSwaps = maxPos + (vHeights.size() - 1 - minPos);

	cout << numSwaps;

	return 0;
}
