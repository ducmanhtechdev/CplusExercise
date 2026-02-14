#include <bits/stdc++.h>

using namespace std;
string isPrime(int n)
{
    if (n < 2)
        return "No";
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return "No";
    }
    return "Yes";
}
int main()
{
    int n;
    cin >> n;
    cout << isPrime(n);

    return 0;
}