#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, diff = 100000;
        cin >> n;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                int m = n / i;
                diff = min(diff, m - i);
            }
        }
        cout << diff << endl;
    }

    return 0;
}