#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p;
        cin >> p;
        int c = 11, num, count = 0, j = 0, n = p;
        while (n > 0)
        {
            num = (1 << c);
            while (n >= num)
            {
                n -= num;
                count++;
            }
            c--;
        }
        cout << count << endl;
    }

    return 0;
}
// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;
// long long convert(int n)
// {
//     long long bin = 0;
//     int rem, i = 1;

//     while (n != 0)
//     {
//         rem = n % 2;
//         n /= 2;
//         bin += rem * i;
//         i *= 10;
//     }

//     return bin;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int p;
//         cin >> p;
//         int rem = p / 2048;
//         p %= 2048;
//         int num = convert(p);
//         string s = to_string(num);
//         int c = count(s.begin(), s.end(), '1');
//         cout << c + rem << endl;
//     }

//     return 0;
// }