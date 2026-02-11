#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise35;
    int age;
    cin >> age;
    if (age > 0 && age <= 11)
    {
        cout << "Thieu nhi";
    }
    if (age > 11 && age <= 25)
    {
        cout << "Thieu nien";
    }
    if (age > 25 && age <= 50)
    {
        cout << "Trung nien";
    }
    if (age > 50)
    {
        cout << "Lao nien";
    }

    return 0;
}