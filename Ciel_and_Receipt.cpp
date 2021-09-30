#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p, n = 0, j = 0,a;
        cin >> p;

        while (n < p)
        {
            a= pow(2, i);
            n+=a;
        }
        if (n == a)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}