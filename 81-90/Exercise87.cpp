#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int count = 0;
    int sum = 0;

    while (a > 0)
    {
        int digit = a % 10;
        if (digit % 2 == 0)
            sum += digit;

        a /= 10;
    }

    cout << sum;

    return 0;
}