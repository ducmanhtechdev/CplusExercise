#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise25
    int a, b, c;
    cin >> a >> b >> c;
    int cv = a + b + c;
    double p = cv / 2.0;

    double s = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << cv << " " <<"\n"  << fixed << setprecision(3) << s;

    return 0;
}