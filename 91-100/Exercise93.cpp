#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = -1;
    bool check = false;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit > max && digit % 2 != 0)
        {
            check = true;
            max = digit;
        }
        n /= 10;
    }

    if (check == false)
    {
        cout << "-";
        return 0;
    }

    cout << max;
    return 0;
}