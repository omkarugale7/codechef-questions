#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, l;
        cin >> n >> k >> l;
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            a = max(a, s[i]);
        }
        int ans = max(s[n - 1] + k * (l - 1), s[n - 1]);
        if (ans > a)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}