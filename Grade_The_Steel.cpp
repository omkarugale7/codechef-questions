#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float hard, carb, tens;
        cin >> hard >> carb >> tens;
        string s = "";
        if (hard > 50)
        {
            s += 'h';
        }
        if (carb < 0.7)
        {
            s += 'c';
        }
        if (tens > 5600)
        {
            s += 't';
        }
        if (s == "hct")
        {
            cout << 10 << endl;
        }
        else if (s == "hc")
        {
            cout << 9 << endl;
        }
        else if (s == "ct")
        {
            cout << 8 << endl;
        }
        else if (s == "ht")
        {
            cout << 7 << endl;
        }
        else if (s == "h" || s == "c" || s == "t")
        {
            cout << 6 << endl;
        }
        else
        {
            cout << 5 << endl;
        }
        cout<<s<<endl;
    }

    return 0;
}