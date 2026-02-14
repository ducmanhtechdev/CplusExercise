#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int count = 0;
    cin >> n;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            count++;
            if (n % (n / i) == 0 && i != (n / i))
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}