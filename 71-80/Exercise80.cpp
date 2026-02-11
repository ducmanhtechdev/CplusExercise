#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int count = 0;

    for (int i = m; i <= n; i++)
    {
        if (i % 5 == 0)
            count++;
    }

    cout << count << " - ";

    for (int i = m; i <= n; i++)
    {
        if (i % 5 == 0)
            cout << i << " ";
    }

    return 0;
}