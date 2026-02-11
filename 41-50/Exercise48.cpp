#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise48;
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Yes" << "\n";
        if (a == b && b == c)
        {
            cout << "Deu";
        }
        else if (a == b || b == c || c == a)
        {
            cout << "Can";
        }
        else if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b))
        {
            cout << "Vuong";
        }
        else
        {
            cout << "Thuong";
        }
    }

    else
    {
        cout << "No";
    }
}
