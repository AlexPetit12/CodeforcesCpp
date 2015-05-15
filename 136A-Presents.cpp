//Codeforces
//136A - Presents

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int *v = new int[n];
	int position;
	for(int i = 0; i < n; i++)
	{
		cin >> position;
		position -= 1;
		v[position] = i + 1;
	}

	for(int i = 0; i < n; i++)
		cout << v[i] << " ";

	delete [] v;
	return 0;
}
