#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise17
    int n;
    cin >> n;
    int num5 = n / 5000; // number5
    int n2 = n % 5000;   // digit
    int num2 = n2 / 2000;
    int n1 = n2 % 2000;
    int num1 = n1 / 1000;
    cout << num5 << ' ' << num2 << " " << num1;
    return 0;
}