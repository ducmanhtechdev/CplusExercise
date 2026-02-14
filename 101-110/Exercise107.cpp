#include <bits/stdc++.h>

using namespace std;
string isPerfect(int n)
{
    long long sum = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (n % (n / i) == 0 && i != (n / i))
            {
                sum += (n / i);
            }
        }
    }
    return (sum - n == n) ? "Yes" : "No";
}
int main()
{
    int n;
    cin >> n;
    cout << isPerfect(n);

    return 0;
}