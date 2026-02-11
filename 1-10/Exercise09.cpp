#include <bits/stdc++.h>

using namespace std;

int main()
{

    //Exercise09
    double a, b, c, p, q;
    cin >> a >> b >> c;
    p = (21 * a * a + 5 * b * b) / (2009 * c * c + 15);
    q = (sqrt(a * a - 2 * b)) / (3 * c * c + 4);

    cout << fixed << setprecision(4) << p << " " << q;

    return 0;
}