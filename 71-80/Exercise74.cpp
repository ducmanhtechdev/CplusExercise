#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    bool check = false;
    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            check = true;
            cout << i << " ";
        }
    }

    if (check == false)
    {
        cout << "-";
    }

    return 0;
}