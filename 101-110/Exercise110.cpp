#include <bits/stdc++.h>

using namespace std;
bool isPrime(int n)
{
    if (n < 2)
        return "No";
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n) && isPrime(n + 2))
    {
        cout << "Yes";
        return 0;
    }
    cout << "No";

    return 0;
}