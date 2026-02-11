#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Exercise56;
    int a, b, c;
    cin >> a >> b >> c;
    int cv = a + b + c;
    double p = cv / 2.0;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        cout << "Day la 3 canh cua mot tam giac" << endl;
        cout << fixed << setprecision(2) << cv << " " << fixed << setprecision(1) << s;
    }
    else
    {
        cout << "Day khong phai la 3 canh cua mot tam giac";
    }

    return 0;
}