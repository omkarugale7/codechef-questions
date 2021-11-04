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
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        sort(num, num + n);
        cout << num[0] + num[1] << endl;
    }

    return 0;
}