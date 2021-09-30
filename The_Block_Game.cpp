#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b=n;
        int pal = 0, a;
        while (n > 0)
        {
            a = n % 10;
            pal = pal * 10 + a;
            n /= 10;
        }
        if (pal==b)
        {
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }

    }

    return 0;
}