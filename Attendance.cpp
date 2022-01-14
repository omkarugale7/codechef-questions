#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<string, string>> v;    
        for (int i = 0; i < n; i++)
        {
            string a, b;
            cin >> a >> b;
            pair<string, string> x;
            x = make_pair(a, b);
            v.push_back(x);
        }
        
        
        for (int i = 0; i < n; i++)
        {
            bool hai_kya = false;
            for (int j = 0; j < n; j++)
            {
                if (v[i].first == v[j].first && i != j)
                {
                    hai_kya = true;
                }
            }
            if (hai_kya)
            {
                cout << v[i].first << " " << v[i].second << endl;
            }
            else
                cout << v[i].first << endl;
        }
    }
    return 0;
}