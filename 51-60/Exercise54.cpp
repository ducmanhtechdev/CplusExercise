#include <iostream>
using namespace std;

int main()
{
    // Exercise54;
    int n;
    cin >> n;

    cout << n / 10 << " ";

    if (n % 100 < 10)
    {
        cout << "0" << n % 100;
    }
    else
    {
        cout << n % 100;
    }

    return 0;
}