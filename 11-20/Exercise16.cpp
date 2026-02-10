#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise16
    int a;
    cin >> a;
    int money = a / 5000;
    int digit = a % 5000;
    cout << money << " " << digit;
    return 0;
}