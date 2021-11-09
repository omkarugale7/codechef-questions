#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, div, ans = 0;
        cin >> n >> k;
        for (int i = k; i > 0; i--)
        {
            div = n % i;
            ans = max(ans, div);
        }
        cout << ans << endl;
    }

    return 0;
}
// #include <iostream>

// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int div = min(k, ((n + 1) / 2));
//         cout << (n % div) << endl;
//     }

//     return 0;
// }