#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Exercise58;
    int n;
    cin >> n;
    bool check = false;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 != 0)
        {
            check = true;
            cout << digit << " ";
        }
        n /= 10;
    }

    if (check == false)
    {
        cout << "-";
    }
    return 0;
}