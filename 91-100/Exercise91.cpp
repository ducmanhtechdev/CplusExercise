#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int max = 0;
    while (a > 0)
    {
        int digit = a % 10;
        if (digit > max)
        {
            max = digit;
        }
        a /= 10;
    }

    cout << max;
    return 0;
}