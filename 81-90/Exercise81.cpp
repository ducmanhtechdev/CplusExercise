#include <bits/stdc++.h>

using namespace std;

int min(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int UCLN(int a, int b)
{
    int UCmin = min(a, b);
    for (int i = UCmin; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }

    return 1;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << UCLN(a,b);

    return 0;
}