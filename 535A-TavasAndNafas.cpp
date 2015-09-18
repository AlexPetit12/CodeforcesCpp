//Codeforces
//535A - Tavans and Nafas

#include <iostream>
using namespace std;

int main()
{
    string underNineteen[] = {"zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
        "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
        "eighteen", "nineteen"};

    string tens[] = {"twenty", "thirty", "forty", "fifty", "sixty",
                    "seventy", "eighty", "ninety"};

    int n;
    cin >> n;

    if(n <= 19)
        cout << underNineteen[n] << endl;
    else if(n % 10 == 0)
        cout << tens[n / 10 - 2] << endl;
    else
        cout << tens[n / 10 - 2] << "-" << underNineteen[n % 10] << endl;

    return 0;
}
