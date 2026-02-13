#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;
    double b;
    cin >> b;
    int i = 0;
    int count = 0;

    while (a <= b)
    {
        a = a + (a * 2 / 100);
        count++;
    }
    

    cout << count; 

    return 0;
}