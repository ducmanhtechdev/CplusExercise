#include <bits/stdc++.h>
using namespace std;
int main()
{ // Exercise50;
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Chan" << "\n";
        if (n > 0)
        {
            cout << "Duong";
        }
        else if (n < 0)
        {
            cout << "Am";
        }
        else if (n == 0)
        {
            cout << "Khong";
        }
    }

    if (n % 2 != 0)
    {
        cout << "Le" << "\n";
        if (n > 0)
        {
            cout << "Duong";
        }
        else if (n < 0)
        {
            cout << "Am";
        }
    }
}
