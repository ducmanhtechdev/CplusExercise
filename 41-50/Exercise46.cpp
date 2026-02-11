#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise46;
    int x;
    cin >> x;
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    int mark = sum % 10;
    cout << mark << "\n";
    if (mark == 9)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
