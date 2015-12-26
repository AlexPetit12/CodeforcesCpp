//Codeforces
//580A - Kafe and First Steps

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int a, b, m = 0, n = 0, p = 0;

	cin >> n;	
	cin >> a;

	while(--n)
	{
		cin >> b;
		
		if(b >= a)
			m++;
		else
		{
			if(m > p)
 				p = m;
			m = 0;
		}

		a = b; 
	}

	cout << max(m + 1, p + 1) << endl;
}
