#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise26
    int a, b, c;
    cin >> a >> b >> c;
    int cv = a + b + c;
    double p = cv / 2.0;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    double r = (a * b * c) / (4 * s);
    cout << fixed << setprecision(3) << r;
    return 0;
}