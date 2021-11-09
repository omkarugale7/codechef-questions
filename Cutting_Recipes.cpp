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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int gcd = __gcd(arr[0], arr[1]);

        for (int i = 2; i < n; i++)
        {
            gcd = __gcd(arr[i], gcd);
        }
        for (int i = 0; i < n; i++)
        {
            cout << (arr[i] / gcd) << " ";
        }
        cout << endl;
    }

    return 0;
}