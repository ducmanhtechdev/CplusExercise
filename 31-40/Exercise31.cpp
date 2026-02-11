#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise31
    double a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << "An gioi hon";
    }
    else if (a < b)
    {
        cout << "Binh gioi hon";
    }
    else
    {
        cout << "Bang nhau";
    }

    return 0;
}