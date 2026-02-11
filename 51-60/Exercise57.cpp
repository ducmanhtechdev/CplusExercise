#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Exercise57;
    int a, b;
    cin >> a >> b;
    int cv = (a + b) * 2;
    long long s = a * b;
    if (a > 0 && b > 0)
    {
        cout << "Day la 2 kich thuoc cua mot hinh chu nhat" << endl;
        cout << cv << " " << s;
    }
    else if (a < 0 && b > 0)
    {
        cout << "Day khong phai la 2 kich thuoc cua mot hinh chu nhat" << endl;
        cout << "a la so am";
    }
    else if (b < 0 && a > 0)
    {
        cout << "Day khong phai la 2 kich thuoc cua mot hinh chu nhat" << endl;
        cout << "b la so am";
    }
    else if (a < 0 && b < 0)
    {
        cout << "Day khong phai la 2 kich thuoc cua mot hinh chu nhat" << endl;
        cout << "a va b la so am";
    }

    return 0;
}