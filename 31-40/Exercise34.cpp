#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise34;

    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c) {
        cout << a;
    } 
    if ( b > c && b > a) {
        cout << b; 
    }
    if ( c > a && c > b) {
        cout << c; 
    }
    return 0;
}