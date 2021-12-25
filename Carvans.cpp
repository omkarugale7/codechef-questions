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
        ll n, count = 1;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max_speed = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] <= max_speed)
            {
                count++;
                max_speed = arr[i];
            }
        }

        cout << count << endl;
    }

    return 0;
}