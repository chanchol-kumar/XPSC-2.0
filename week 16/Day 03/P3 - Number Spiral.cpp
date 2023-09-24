//problem link : https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (x < y)
        {
            ll ans;
            if (y % 2 != 0)
                ans = y * y - x + 1;
            else
                ans = (y - 1) * (y - 1) + x;
            cout << ans << "\n";
        }
        else
        {
            ll ans;
            if (x % 2 != 0)
                ans = (x - 1) * (x - 1) + y;
            else
                ans = x * x - y + 1;
            cout << ans << "\n";
        }
    }
    return 0;
}
