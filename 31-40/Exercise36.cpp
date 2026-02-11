#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise36;
    double mark1, mark2;
    cin >> mark1 >> mark2;
    double markavg = (mark1 + mark2 * 2) / 3.0;
    cout << fixed << setprecision(1) << markavg << '\n';

    if (markavg < 3.5)
    {
        cout << "Kem";
    }
    else if (markavg < 5)
    {
        cout << "Yeu";
    }
    else if (markavg < 6.5)
    {
        cout << "Trung binh";
    }
    else if (markavg < 8)
    {
        cout << "Kha";
    }
    else
    {
        cout << "Gioi";
    }
    return 0;
}