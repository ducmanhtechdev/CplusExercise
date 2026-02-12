#include <bits/stdc++.h>
using namespace std;
int minNum(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int UCLN(int a, int b)
{
    int min = minNum(a, b);
    for (int i = min; i >= 1; i--)
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
    // short

    int a;
    int b;
    cin >> a >> b;
    int c = UCLN(a, b);
    int d = a / c;
    int e = b / c;

    cout << d << "/" << e;

    return 0;
}