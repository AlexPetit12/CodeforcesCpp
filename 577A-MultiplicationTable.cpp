//Codeforces
//577A - Multiplication table

#include <iostream>
using namespace std;

int main()
{
  int n, x, total = 0;
  cin >> n >> x;

  for(int i = 1; i <= n; i++)
  {
    if(x % i == 0 && x / i <= n)
      total += 1;
  }

  cout << total;
  return 0;
}
