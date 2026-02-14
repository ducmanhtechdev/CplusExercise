#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    bool check = false;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
        {
            check = true;
            cout << a[i] << "\n";
        }

    if (check == false)
        cout << "-";

    return 0;
}