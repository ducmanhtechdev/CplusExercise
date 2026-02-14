#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long multi = 1;
    for (int i = 1; i <= n; i++)
    {
        multi *= i;
    }

    cout << multi;
    return 0;
}