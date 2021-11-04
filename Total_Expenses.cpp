#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double q, p;
        cin >> q >> p;
        if (q > 1000)
        {
            double ans = double((q * p) - ((q * p) / 10));
            cout << setprecision(6) << fixed << ans << endl;
        }
        else
        {
            double ans = double(q * p);
            cout << setprecision(6) << fixed << ans << endl;
        }
    }

    return 0;
}