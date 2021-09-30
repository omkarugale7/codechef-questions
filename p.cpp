#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        int a = sqrt(n);
        int cnt = 0;
        for (int i = 1; i <= a; i++)
        {
            if (n % i == 0)
            {

                cnt = cnt + 2;
            }
        }
        int num[cnt], z = 0, diff = 1000000;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                num[z] = i;
                z++;
            }
        }
        int b;
        for (int i = 1; i <= cnt / 2; i++)
        {
            b = n / num[i];
            if (num[i] - b < 0)
            {
                continue;
            }
            else

                diff = min(num[i] - b, diff);
        }
        cout << diff << endl;
    }
    return 0;
}