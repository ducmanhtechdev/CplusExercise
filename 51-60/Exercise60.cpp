#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}

int main()
{
    // Exercise60;
    int n;
    cin >> n;
    bool check = false;
    int sum = 0;
    int maxNum = -1;
    int minNum = 9;
    while (n > 0)
    {
        int digit = n % 10;
        maxNum = max(digit, maxNum);
        minNum = min(digit, minNum);
        n /= 10;
    }

    cout << maxNum << " " << minNum;
    return 0;
}