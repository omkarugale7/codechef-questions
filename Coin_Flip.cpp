#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g;
        cin >> g;
        while (g--)
        {
            int i, n, q;
            cin >> i >> n >> q;
            if (n % 2 != 0)
            {
                if (i != q)
                {
                    cout << (n + 1) / 2 << endl;
                }
                else
                {
                    cout << n / 2 << endl;
                }
            }
            else
            {
                cout << n / 2 << endl;
            }
        }
    }

    return 0;
}