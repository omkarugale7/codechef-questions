#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int a, b, z = 0, i = 1, lt = 0, bt = 0;
        cin >> a >> b;
        while (lt <= a && bt <= b)
        {
            // cout << i << " lt" << endl;
            lt += i;
            i++;
            // cout << i << " bt" << endl;
            bt += i;
            i++;
            // cout << lt << " " << bt << endl;
        }
        if (bt > b)
        {
            cout << "limak" << endl;
        }
        else if (lt > a)
        {
            cout << "limak" << endl;
        }
    }

    return 0;
}