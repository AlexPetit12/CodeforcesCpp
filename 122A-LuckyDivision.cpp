//Codeforces
//122A - Lucky division

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> luckyNumbers {4,7,44,47,444,447,474,477,744,747,777};

	string output = "NO";

	for(unsigned int i = 0; i < luckyNumbers.size(); i++)
	{
		if(n % luckyNumbers[i] == 0)
		{
			output = "YES";
			break;
		}
	}

	cout << output;

	return 0;
}
