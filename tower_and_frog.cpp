#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long int

int decimalToBinary(int N)
{

    // To store the binary number
    ull B_Number = 0;
    int cnt = 0;
    int ans = 0;
    while (N != 0)
    {
        int rem = N % 2;
        if (rem == 1)
            ans++;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        // Count used to store exponent value
        cnt++;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << decimalToBinary(x) << endl;
    }

    return 0;
}