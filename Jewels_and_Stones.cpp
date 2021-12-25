#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, j;
        cin >> s;
        cin >> j;
        int array[52];
        for (int i = 0; i < s.size(); i++)
        {
            array[s[i]-64]++;
        }
        
    }

    return 0;
}