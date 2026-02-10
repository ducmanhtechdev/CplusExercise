#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise15
    int a;
    cin >> a;
    int b;
    cin >> b;
    b/=10; 
    b%=10; 
    cout << (a % 10) + b; 
    return 0;
}