#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int count = 0;
    int sum = 0;
    bool check = false;

    for (int i = m; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            check = true;
            sum += i;
            count++;
        }
    }

    if (check == true)
    {
        cout << sum / count;
    }
    else
    {
        cout << 0;
    }

    return 0;
}