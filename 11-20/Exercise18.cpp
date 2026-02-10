#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise18
    int n;
    cin >> n; // giây
    cout << (n / 3600) << ":" << (n % 3600 / 60) << ":" << (n % 3600 % 60);

    return 0;
}