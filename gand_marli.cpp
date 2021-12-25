#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long k, b, c;
        cin >> k >> b >> c;
        if(k==2)
        {
            if((b+c)%3==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else if((b+c)%5==0)
        cout<<"NO"<<endl;
       else  
        {
            int zz = b + c;
            zz += (zz % 10);
           
            //  int arr[3];
            // arr[0] = zz;
            // arr[1] = (zz * 2) % 10;
            // arr[2] = (zz * 4) % 10;
            // int sum[3];
            // sum[0] = arr[0];
            // sum[1] = arr[0] + arr[1];
            // sum[2] = arr[0] + arr[1] + arr[2];
           long long int w = k - 3;
           long long int loop = w / 4;
           long long  int rem = w % 4;
            for(int i = 0 ; i<rem ;i++)
            zz+=(zz%10);
           long long  int final = (zz + loop * 20 ) % 3;
            if (final == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        // else if ((b % 2 != 0 && c % 2 != 0) || (b % 2 == 0 && c % 2 == 0))
        // else
        // {
        //     int z = (b + c);
        //     int zz = z % 10;
        //     int arr[3];
        //     arr[0] = zz;
        //     arr[1] = (zz * 2) % 10;
        //     arr[2] = (zz * 4) % 10;
        //     int sum[3];
        //     sum[0] = arr[0];
        //     sum[1] = arr[0] + arr[1];
        //     sum[2] = arr[0] + arr[1] + arr[2];
        //   long long int w = k - 2;
        //     long long int loop = w / 4;
        //   long long  int rem = w % 4;
        //   long long int final = (z + loop * 20 + sum[rem - 1]) % 3;
        //     if (final == 0)
        //         cout << "YES" << endl;
        //     else
        //         cout << "NO" << endl;
        // }
    }

    return 0;
}