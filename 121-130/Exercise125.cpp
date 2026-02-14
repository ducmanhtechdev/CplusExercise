#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int k;
    cin >> k;
    int x;
    cin >> x;
    a[k] = x;

    for (int i = 0; i < n; i++)
        cout << a[i] << "\n";

    return 0;
}