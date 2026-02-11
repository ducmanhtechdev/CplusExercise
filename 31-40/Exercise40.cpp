#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise40;
    int result = 0;
    int a, b;
    cin >> a >> b;

    if (a > 0 && b > 0 || a < 0 && b < 0)
    {
        result = 1;
    }
    if (a > 0 && b < 0 || a < 0 && b > 0)
    {
        result = -1;
    }
    if (a == 0 || b == 0) {
        result = 0;
    }

    cout << result; 
}