#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a = __gcd(n, m);
        cout << (n / a) * (m / a) << endl;
    }
    return 0;
}