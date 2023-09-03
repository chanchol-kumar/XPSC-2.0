// problem link : https://codeforces.com/contest/1861/problem/B

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

        bool flag = false;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] == '0' && b[i] == '0' && a[i + 1] == '1' && b[i + 1] == '1')
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
