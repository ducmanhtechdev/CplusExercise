#include <bits/stdc++.h>

using namespace std;
string isMagic(int n)
{
    // số đảo được
    int k = 0;
    string check = "Yes";
    int b = n;
    while (n > 0)
    {
        k++;
        n /= 10;
    }

    for (int i = 1; i <= k; i++)
    {
        int subNum = b / pow(10, k - i);
        if (subNum % i == 0)
        {
            check = "Yes";
        }
        else
        {
            check = "No";
            return check;
        }
    }
    return check;
}
int main()
{
    int n;
    cin >> n;
    cout << isMagic(n);

    return 0;
}