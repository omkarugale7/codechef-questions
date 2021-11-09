#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int no, zero = 0;
        cin >> no;
        int c = 5;
        while ((no / c) != 0)
        {
            zero = zero + (no / c);
            c *= 5;
        }
        cout << zero << "\n";
    }
}