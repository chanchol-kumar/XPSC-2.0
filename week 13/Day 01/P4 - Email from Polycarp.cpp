// problem link : https://codeforces.com/problemset/problem/1185/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int c = 1, d = 1;
        if (a[0] == b[0])
        {
            for (int i = 1; i < b.size(); i++)
            {
                if (b[i] == a[d])
                    d++;
                else if (b[i] != b[i - 1])
                    c = 0;
            }
        }
        else
            c = 0;
        if (c && d == a.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
