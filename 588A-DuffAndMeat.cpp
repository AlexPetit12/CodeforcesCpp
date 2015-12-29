//Codeforces
//588A - Duff and Meat

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int a, p, q, total = 0;
  cin >> a >> p;
  
  total += a * p;

  for(int i = 1; i < n; i++)
  {
    cin >> a >> q;
    if(q < p)
    {
      total += a * q;
      p = q;
    }
    else
    {
      total += a * p;
    }
  }

  cout << total;

  return 0;
}
