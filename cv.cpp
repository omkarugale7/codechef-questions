#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (((s[i] == 'b') || (s[i] == 'c') || (s[i] == 'd') || (s[i] == 'f') || (s[i] == 'g') || (s[i] == 'h') ||
                 (s[i] == 'j') || (s[i] == 'k') || (s[i] == 'l') || (s[i] == 'm') || (s[i] == 'n') || (s[i] == 'p') ||
                 (s[i] == 'q') || (s[i] == 'r') || (s[i] == 's') || (s[i] == 't') || (s[i] == 'v') || (s[i] == 'w') ||
                 (s[i] == 'x') || (s[i] == 'y') || (s[i] == 'z')) &&
                ((s[i] == 'a') || (s[i] == 'e') ||
                 (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')))
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}