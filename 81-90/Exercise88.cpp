#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, x;
    cin >> a >> x;

    int sum = 0;

    while (a > 0)
    {
        int digit = a % 10;
        if (digit > x)
            sum += digit;

        a /= 10;
    }

    cout << sum;

    return 0;
}