//Codeforces
//583A - Asphalting roads

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[51] = {0};
    int y[51] = {0};

    int a, b;
    for(int i = 1; i <= n * n; i++)
    {
        cin >> a >> b;
        if(x[a] == 0 && y[b] == 0)
        {
            cout << i << " ";
            x[a] = 1;
            y[b] = 1;
        }
    }

    return 0;
}
