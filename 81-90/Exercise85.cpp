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
        sum += a % 10;
        a /= 10;
    }

    cout << sum;

    return 0;
}