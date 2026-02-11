#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise29
    double c;
    cin >> c; // r * 2 * 3.14;
    double r = c / 3.14 / 2;
    double s = r * r * 3.14;
    cout << fixed << setprecision(2) << s;
    
    return 0;
}