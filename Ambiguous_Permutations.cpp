#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    unsigned long long int n;
    cin >> n;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        unsigned long long int num[n + 1], flag = 0;
        for (unsigned long long int i = 1; i <= n; i++)
        {
            cin >> num[i];
        }

        for (unsigned long long int i = 1; i <= n; i++)
        {
            if (num[num[i]] != i)
            {
                flag = 1;
            }
        }

        if (flag == 0)
        {
            cout << "ambiguous" << endl;
        }
        else
        {
            cout << "not ambiguous" << endl;
        }

        return 0;
    }
}