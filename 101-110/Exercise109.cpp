#include <bits/stdc++.h>
using namespace std;

string isPalindrone(int n)
{
    int sum = 0;
    int a = n;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum * 10 + digit;
        n /= 10;
    }
    if (sum == a)
        return "Yes";
    return "No";
}

int main()
{
    int n;
    cin >> n;
    cout << isPalindrone(n);
    return 0;
}