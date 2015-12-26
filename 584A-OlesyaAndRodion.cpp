//Codeforces
//584A - Olesya and Rodion

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    if(n == 1 && t == 10)
    {
        cout << -1 << endl;
    }
    else
    {
        if(t == 10)
        {
            cout << 1;
            while(n > 1)
	    {
                cout << 0;
                n--;
            }
        }
        else
        {
            while(n--)
            {
                 cout << t;
            }
        }
    }

    return 0;
}
