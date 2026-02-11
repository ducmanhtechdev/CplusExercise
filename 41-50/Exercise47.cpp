#include <bits/stdc++.h>

using namespace std;

int main()
{ // Exercise47;
    int n;
    cin >> n;
    int q = sqrt(n); 

    if ( q * q == n) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }


}
