#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise43;
    int weight;
    cin >> weight;

    if (weight > 80)
    {
        cout << "Beo phi";
    }
    else if (weight < 45)
    {
        cout << "Suy dinh duong";
    }
    else
    {
        cout << "Binh thuong";
    }
}