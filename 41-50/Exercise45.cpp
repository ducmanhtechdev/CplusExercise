#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise45;
    int month;
    cin >> month;
    int year;
    cin >> year;
    bool check = false;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        check = true; // nam nhuan
    }

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30";
        break;
    default:
        if (check == true)
        {
            cout << "29";
        }
        else
        {
            cout << "28";
        }
    }
}
