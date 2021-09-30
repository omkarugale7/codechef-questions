#include <iostream>
#include <math.h>

using namespace std;
int prime(int n)
{
    if (n == 1 || n == 0)
    {
        return false;
    }
    else
    {
        int a = 1;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                a = 0;
            }
        }
        if (a == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {

        int n;
        cin >> n;
        if (prime(n))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}