#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Exercise08
    double a, b;
    cin >> a >> b;

    double p, q, r;

    p = 21 * a + 5 * b - 2009;
    q = ((21 * a * a) - 5 * b) / (2009 * b * b);
    r = (21 * a + 5 * b * b) / (2009 * b + 15);

    cout << p << " " << fixed << setprecision(4) << q << "\n";
    cout << fixed << setprecision(6) << r;

    return 0;
}