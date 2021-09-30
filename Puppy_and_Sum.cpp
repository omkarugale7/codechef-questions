#include <iostream>

using namespace std;
int sum(int a)
{
    if (a != 0)

    {
        return a + sum(a - 1);
    }
    return 0;
}

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int d, n;
        cin >> d >> n;
        int temp = d, s = 0;
        while (d--)
        {
            s = sum(n);
            n = sum(n);
        }
        cout << s << endl;
    }

    return 0;
}