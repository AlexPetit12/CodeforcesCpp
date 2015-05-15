//Codeforces
//344A - Magnets

#include <iostream>
using namespace std;

int main()
{
	long int n;
	cin >> n;

	int first;
	cin >> first; // gets first of every second magnets

	int count = 0;
	int second; // gets second of every second magnets
	for(long int i = 0; i < n - 1; i++)
	{
		cin >> second;
		if(first != second)
			count++;

		first = second;
	}

	cout << count + 1;
	return 0;
}


