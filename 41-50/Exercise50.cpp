#include <bits/stdc++.h>
using namespace std;
int main()
{ // Exercise50;
    int x;
    cin >> x;
    int money1 = 600;
    int money2 = 800;
    int money3 = 1100;
    int money4 = 1500;

    if (x < 50)
    {
        cout << money1 * x;
    }
    else if (x < 100)
    {
        cout << money1 * 50 + money2 * (x - 50);
    }
    else if (x < 200)
    {
        cout << money1 * 50 + money2 * 50 + money3 * (x - 100);
    }
    else
    {
        cout << money1 * 50 + money2 * 50 + money3 * (100) + money4 * (x - 200);
    }
}
