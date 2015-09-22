//Codeforces
//552A - Vanya and Table

#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, d, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        sum += (c - a + 1) * (d - b + 1);
    }

    cout << sum;

    return 0;
}
