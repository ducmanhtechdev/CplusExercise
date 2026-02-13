#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int min = 9;
    while (a > 0)
    {
        int digit = a % 10;
        if (digit < min)
        {
            min = digit;
        }
        a /= 10;
    }

    cout << min;
    return 0;
}