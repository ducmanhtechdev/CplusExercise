#include <bits/stdc++.h>

using namespace std;

int main()
{
    // exercise05
    int a;
    cin >> a;
    long long result1 = a * a;
    long long result2 = pow(a, 5);
    cout << result1 << "\n";
    cout << result2;
    // ép kiểu tránh tràn số
    return 0;
}