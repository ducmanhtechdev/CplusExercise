#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    // Exercise55;
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (max(a, b) > max(c, d))
    {
        cout << max(a, b);
    }
    else if (a == b && b == c && c == d)
    {
        cout << "=";
    }
    else
    {
        cout << max(c, d);
    }

    return 0;
}