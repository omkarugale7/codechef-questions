#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans = 0, j = 0;
        cin >> n;
        int re[6] = {100, 50, 10, 5, 2, 1};
        while (n > 0)
        {
            int b = n / re[j];
            if (b != 0)
            {
                ans += b;
                n -= b * re[j];
            }
            j++;
        }
        cout << ans << endl;
    }

    return 0;
}