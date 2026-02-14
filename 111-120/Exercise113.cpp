#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 1;
    int m = 1;

    while (max <= n)
    {
        max = m * (m + 1);
        m++;
        if (max == n)
        {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

    return 0;
}