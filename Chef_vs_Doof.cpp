#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num[n], flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            if (num[i] % 2 == 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}