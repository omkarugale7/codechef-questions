#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p, count = 0, a = 1;
        cin >> p;
        while (a < p)
        {
            a = a * 2;
        }
        if (a > 2048)
        {
            a = 2048;
        }
        else
        {
            if (a != p)
            {
                a /= 2;
            }
        }

        while (p > 0)
        {
            if (p >= a)
            {
                p -= a;
                count++;
            }

            a /= 2;
        }
        cout << count << endl;
    }

    return 0;
}