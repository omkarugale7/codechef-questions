#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s,diff;
        cin >> n >> s;
         diff = 0;
        for (int i = 0; i < n; i++)
        {
            int a = s - i;
            if (a <= n)
            {
                diff = max(diff, a - i);
            }
        }
        cout << diff << endl;
    }

    return 0;
}