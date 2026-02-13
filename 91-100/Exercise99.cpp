#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k;
    cin >> k;
    int count = 0;
    double sum = 0;
    int i = 0;

    while (count < k)
    {
        if (i % 3 != 0)
        {
            count++;
            sum += i;
        }
        i++;
    }

    cout << fixed << setprecision(1) << sum / count;

    return 0;
}