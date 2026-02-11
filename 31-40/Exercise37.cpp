#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise37;

    int t;
    cin >> t;
    if (t >= 2 && t <= 4)
    {
        cout << "Mua Xuan";
    }
    if (t >= 5 && t <= 7)
    {
        cout << "Mua Ha";
    }
    if (t >= 8 && t <= 11)
    {
        cout << "Mua Thu";
    }
    if (t >= 12)
    {
        cout << "Mua Dong";
    }
    if (t == 1) {
        cout << "Mua Dong";
    }
    
}