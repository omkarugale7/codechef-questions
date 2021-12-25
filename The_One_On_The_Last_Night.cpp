#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s = to_string(n);
        for (int i = 0; i < 9; i++)
        {
            if (k == 0)
                break;
            for (int j = 0; j < s.size(); j++)
            {
                if (k == 0)
                    break;
                if (s[j] - '0' == i)
                {
                    s[j]++;
                    k--;
                }
            }
        }
        long long int add = 1;
        for (int i = 0; i < s.size(); i++)
        {
            add *= (s[i] - '0');
        }
        cout << add << endl;
    }

    return 0;
}