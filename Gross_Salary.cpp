#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float salary;
        cin >> salary;
        float hra, da, ans;
        if (salary < 1500)
        {
            hra = salary / 10;
            da = salary * 0.9;
            ans = (salary + hra + da);
        }
        else
        {
            hra = 500;
            da = salary * 0.98;
            ans = (salary + hra + da);
        }
        cout << fixed << setprecision(2) << ans << endl;
    }

    return 0;
}