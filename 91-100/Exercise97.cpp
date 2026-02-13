#include <iostream>
#include <string>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int count = 0;
    int result = 0;

    int i = 0;
    while (count < k)
    {
        if (i % 3 == 0 && i % 9 != 0)
        {
            result = i;
            count++;
        }
        i++;
    }

    cout << result;

    return 0;
}
