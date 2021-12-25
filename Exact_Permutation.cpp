#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        bool ans = true;
        int arr[200]={0};
        string s4 = s1 + s2;
        for (int i = 0; i < s4.size(); i++)
            arr[s4[i]]++;
        for (int i = 0; i < s3.size(); i++)
            arr[s3[i]]--;
        for (int i = 0; i < 200; i++)
        {
            if (arr[i] > 0)
            {
                ans = false;
                break;
            }
        }
        if (ans == false)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}