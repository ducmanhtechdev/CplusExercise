#include <iostream>
#include <string>

int sum(int k)
{
    long long sum = 0;
    for (int i = 0; i < k; i += 2)
    {
        sum += i;
    }
    return sum;
}

using namespace std;

int main()
{
    int k;
    cin >> k;
    int i = 2;
    while (sum(i) <= k)
    {
        cout << i << " ";
        i += 2;
    }

    return 0;
}