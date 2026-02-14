#include <bits/stdc++.h>
using namespace std;

int sumDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

bool isPrime(int n)
{
    if (n < 2)
        return false;
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
    int res1 = sumDigit(n);
    int sum = 0;

    if (!isPrime(n))
    {

        for (int i = 2; i <= sqrt(n); i++)
        {
            while (n % i == 0)
            {
                sum += sumDigit(i);
                n /= i;
            }
        }
        if (n > 1)
            sum += sumDigit(n);
        if (sum == res1)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    else
    {
        cout << "No";
    }

    return 0;
}