#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int k;
    cin >> k;
    int count = 0;
    int i = 0;
    long long sum = 0;

    while (count < k)
    {
        if (isPrime(i) && isPrime(i + 2))
        {
            count++;
            sum += i;
        }
        i++;
    }

    cout << sum;
    return 0;
}