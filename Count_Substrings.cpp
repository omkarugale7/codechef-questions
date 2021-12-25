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
        string s;
        cin >> s;
        long long int cnt = count(s.begin(), s.end(), '1');
        cout << (cnt * (cnt + 1)) / 2 << endl;
    }

    return 0;
}