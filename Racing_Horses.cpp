// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int ans = INT_MAX;
//         sort(arr, arr + n);
//         for (int i = 1; i < n; i++)
//         {
//             ans = min(ans, arr[i] - arr[i - 1]);
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int diff = max(arr[i], arr[j]) - min(arr[i], arr[j]);
                ans = min(ans, diff);
            }
        }
        cout << ans << endl;
    }

    return 0;
}