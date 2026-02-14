    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int a;
        cin >> a;
        int b;
        cin >> b;

        for (int i = 1; i <= b; i++)
        {
            for (int j = 1; j <= a; j++)
            {
                cout << '*';
            }
            cout << endl;
        }

        return 0;
    }