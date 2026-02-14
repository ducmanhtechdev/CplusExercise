#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    bool check = false;

    int m;
    cin >> m;
    int n;
    cin >> n;

    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
            check = true;
        }
    }

    if (check == false)
    {
        cout << "-";
    }

    return 0;
}