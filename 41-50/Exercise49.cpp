#include <bits/stdc++.h>
using namespace std;
int main()
{ // Exercise49;
    int x;
    cin >> x;
    int money1 = 12000;
    int money2 = 10000;
    int money3 = 9000;

    if (x == 1)
        cout << money1;
    else if (x <= 30)
    {
        cout << money1 + (x - 1) * money2;
    }
    else
    {
        cout << money1 + (29) * money2 + (x - 30) * money3;
    }
}
