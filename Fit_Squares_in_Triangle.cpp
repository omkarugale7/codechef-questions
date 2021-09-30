#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int b, ans = 0, c;
        cin >> b;
        c = b - 2;
        for (int i = 0; i <= c / 2; i++)
        {
            ans += i;
        }
        cout << ans << endl;

        ;
    }

    return 0;
}