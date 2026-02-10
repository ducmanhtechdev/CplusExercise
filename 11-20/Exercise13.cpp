#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise13
    int a;
    cin >> a;
    int sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }

    // 1234
    cout << sum;
    return 0;
}