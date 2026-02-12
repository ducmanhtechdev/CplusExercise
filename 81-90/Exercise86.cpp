#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int count = 0;
    int sum = 0;
    bool check = false;

    while (a > 0)
    {
        int digit = a % 10;
        if (digit % 2 == 0)
        {
            check = true;
            cout << digit << " ";
        }

        a /= 10;
    }

    if (check == false)
        cout << "-";

    return 0;
}