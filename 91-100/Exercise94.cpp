#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int min = 9;
    bool check = false;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit < min && digit % 2 == 0)
        {
            check = true;
            min = digit;
        }
        n /= 10;
    }

    if (check == false)
    {
        cout << "-";
        return 0;
    }

    cout << min;
    return 0;
}