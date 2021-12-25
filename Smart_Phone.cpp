#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, num[i] * (n - i));
    }
    cout << ans << endl;
    return 0;
}