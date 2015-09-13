//Codeforces
//570A - Elections

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, nbrVotes, bestCandidate = 0;
	cin >> n >> m;
	vector<int> v(n, 0);

	for(int cityNum = 0; cityNum < m; cityNum++)
	{
		int highestNbrVotes = 0;
		int indexHighestNbrVotes = 0;
		for(int candidateNum = 0; candidateNum < n; candidateNum++)
		{
			cin >> nbrVotes;
			if(highestNbrVotes < nbrVotes)
			{
				highestNbrVotes = nbrVotes;
				indexHighestNbrVotes = candidateNum;
			}
		}

		v[indexHighestNbrVotes]++;

		if(v[indexHighestNbrVotes] > v[bestCandidate])
			bestCandidate = indexHighestNbrVotes;
		else if(v[indexHighestNbrVotes] == v[bestCandidate] && indexHighestNbrVotes < bestCandidate)
			bestCandidate = indexHighestNbrVotes;
	}

	cout << bestCandidate + 1;

	return 0;
}
