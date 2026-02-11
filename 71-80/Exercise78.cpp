#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int count = 0;
    double count2 = 0;
    int sum = 0;
    int sum2 = 0;
    bool check = false;

    for (int i = m; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            sum += i;
            count++;
        }

        if (i % 2 == 0 && i % 3 == 0)
        {
            check = true;
            sum2 += i;
            count2++;
        }
    }

    cout << (sum) << " ";
    if (check == true)
    {
        cout << fixed << setprecision(0) << (sum2 / count2);
    }
    else
    {
        cout << 0;
    }

    return 0;
}