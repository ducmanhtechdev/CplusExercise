#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    while (a > 0)
    {
        int digit = a % 10;
        cout << digit;
        a /= 10;
    }

    return 0;
}