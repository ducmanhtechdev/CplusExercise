#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Exercise59;
    int n;
    cin >> n;
    bool check = false;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
        {
            sum += digit;
            check = true;
        }
        n /= 10;
    }
    if (check == false)
    {
        cout << "-";
        return 0;
    }
    cout << sum;
    return 0;
}