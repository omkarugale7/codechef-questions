#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        long long int count = 0;
        long long int c[n];
        c[0] = a[0];
        for (int i = 1; i < n; i++)
            c[i] = a[i] - a[i - 1];
        for (int i = 0; i < n; i++)
        {
            if (c[i]>=b[i])
                count++;
        }
        cout << count << endl;
    }

    return 0;
}