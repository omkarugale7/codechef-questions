#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int num[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cin >> num[i][j];
            }
        }
        long long int sum[n][n];
        for (int i = 0; i < n; i++)
        {
            sum[n - 1][i] = num[n - 1][i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = 0; j <= i; j++)
            {
                sum[i][j] = num[i][j] + max(sum[i + 1][j], sum[i + 1][j + 1]);
            }
        }

        cout << sum[0][0] << endl;
    }

    return 0;
}
