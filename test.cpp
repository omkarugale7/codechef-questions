#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n][n];
    ll dp[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> arr[i][j];
        }
    }

    dp[0][0] = arr[0][0];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                dp[i][j] = arr[i][j] + dp[i - 1][j];
            }
            else if (j == i)
            {
                dp[i][j] = arr[i][j] + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + arr[i][j];
            }
        }
    }

    ll ans = -1;
    for (int i = 0; i < n; i++)
    {
        ans = max(dp[n - 1][i], ans);
    }

    cout << ans << endl;

    return 0;
}