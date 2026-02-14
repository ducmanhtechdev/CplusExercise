#include <bits/stdc++.h>
using namespace std;

string isTriangular(int n)
{

    int sum = 0;
    int count = 0;
    while (sum <= n)
    {
        sum += count;
        count++;
        if (sum == n)
        {
            return "Yes";
        }
    }

    return "No";
}

int main()
{
    int n;
    cin >> n;
    cout << isTriangular(n);
    return 0;
}