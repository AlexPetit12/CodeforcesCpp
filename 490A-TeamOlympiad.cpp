//Codeforces
//490A - Team olympiad

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v1(n);
	vector<int> v2(n);
	vector<int> v3(n);

	int t;
	for(int i = 0; i < n; i++)
	{
		cin >> t;
		if(t == 1)
			v1[i] = 1;
		else if(t == 2)
			v2[i] = 2;
		else
			v3[i] = 3;
	}

	int countV1 = count(v1.begin(), v1.end(), 1);
	int countV2 = count(v2.begin(), v2.end(), 2);
	int countV3 = count(v3.begin(), v3.end(), 3);
	int teamNumbers = 0;

	if(countV1 == 0 || countV2 == 0 || countV3 == 0)
		cout << 0;
	else
	{
		teamNumbers =  min(min(countV1, countV2), countV3);
		cout << teamNumbers << endl;
	}

	unsigned int x = 0, y = 0, z = 0;

	for(int i = 0; i < teamNumbers; i++)
	{
		while(x < v1.size())
		{
			if(v1[x] == 1)
			{
				cout << x + 1 << " ";
				x++;
				break;
			}
			else
				x++;
		}

		while(y < v2.size())
		{
			if(v2[y] == 2)
			{
				cout << y + 1 << " ";
				y++;
				break;
			}
			else
				y++;
		}

		while(z < v1.size())
		{
			if(v3[z] == 3)
			{
				cout << z + 1 << endl;
				z++;
				break;
			}
			else
				z++;
		}
	}

	return 0;
}
