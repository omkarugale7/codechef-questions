#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll b[k * n];
        ll sum = 0, maxsum = INT_MIN;
        for (ll i = 0; i < k * n; i++)
        {
            b[i] = a[i % n];
            sum += b[i];
            if (sum < 0)
            {
                sum = 0;
            }
            maxsum = max(maxsum, sum);
        }
        cout << maxsum << endl;
    }

    return 0;
}