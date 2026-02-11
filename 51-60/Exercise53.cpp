#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    if (0 <= t && t < 18)
    {
        cout << "Tre em" << endl;
        if (t <= 6)
        {
            cout << "Tre mam non";
        }
        else if (t <= 11)
        {
            cout << "Tre tieu hoc";
        }
        else
        {
            cout << "Tre trung hoc";
        }
    }
    else if (t < 60)
    {
        cout << "Nguoi truong thanh" << endl;
        if (t <= 23)
        {
            cout << " Sinh vien";
        }
        else if (t <= 60)
        {
            cout << "Nguoi di lam";
        }
    }
    else
    {
        cout << "Nguoi cao tuoi" << endl;
        if (t <= 62)
        {
            cout << "Sap nghi huu";
        }
        else
        {
            cout << "Da nghi huu";
        }
    }
    return 0;
}