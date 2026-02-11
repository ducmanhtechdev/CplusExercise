#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int count7 = 0;
    double count23 = 0;
    long long sum = 0;
    bool check = false;

    for (int i = m; i <= n; i++)
    {
        if (i % 7 == 0)
        {
            count7++;
        }

        if (i % 2 == 0 || i % 3 == 0)
        {
            check = true;
            sum += i;
            count23++;
        }
    }

    cout << count7 << " ";
    if (check == true)
    {
        cout << fixed << setprecision(1) << (sum / count23);
    }
    else
    {
        cout << "0.0";
    }
    return 0;
}