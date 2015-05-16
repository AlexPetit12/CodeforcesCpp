//Codeforces
//479A - Expression

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int sum = a + b + c;
	int mul = a * b * c;
	int sumMulAb = (a + b) * c;
	int mulSumAb = (a * b) + c;
	int sumMulBc = a + (b * c);
	int mulSumBc = a * (b + c);

	cout << max(max(sum, mul), max(max(sumMulAb, mulSumAb), max(sumMulBc, mulSumBc)));

	return 0;
}
