#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, b, c;
        cin >> k >> b >> c;
        if (k == 2)
        {
            if ((b + c) % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if ((b + c) % 5 == 0)
            cout << "NO" << endl;
       else if ((b % 2 == 0 && c % 2 != 0) || (c % 2 == 0 && b % 2 != 0))
        {
            int zz =  b + c;
             zz += (zz % 10);
            int arr[3];
            arr[0] = zz;
            arr[1] = (zz * 2) % 10;
            arr[2] = (zz * 4) % 10;
            int sum[3];
            sum[0] = arr[0];
            sum[1] = arr[0] + arr[1];
            sum[2] = arr[0] + arr[1] + arr[2];
            int t = k - 3;
            int loop = t / 4;
            int rem = t % 4;
            int final = (z + loop * 2 + sum[rem - 1]) % 3;
            if (final == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        // else if ((b % 2 != 0 && c % 2 != 0) || (b % 2 == 0 && c % 2 == 0))
    }

    return 0;
}