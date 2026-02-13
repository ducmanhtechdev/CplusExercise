#include <iostream>
#include <string>

using namespace std;

long long getSum(long long n)
{
    long long res = 0;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    string s;
    if (!(cin >> s))
        return 0;

    if (s == "0")
    {
        cout << 0;
        return 0;
    }

    long long currentSum = 0;
    for (char c : s)
    {
        currentSum += (c - '0');
    }

    // Vòng lặp thần thánh: Rút gọn cho đến khi còn 1 chữ số
    while (currentSum >= 10)
    {
        currentSum = getSum(currentSum);
    }

    cout << currentSum;
    return 0;
}