#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'Y')
            {
                cout << "NOT INDIAN" << endl;
                flag = 1;
                break;
            }
            else if (s[i] == 'I')
            {
                cout << "INDIAN" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NOT SURE" << endl;
        }
    }

    return 0;
}