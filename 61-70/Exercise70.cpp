#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool check = false;
    long long sum = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            check = true;
            sum += i;
            count++;
        }
    }
    if (check == false)
    {
        cout << 0;
        return 0;
    }
    cout << fixed << setprecision(1) << sum / (double)count;

    return 0;
}
