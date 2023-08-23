//problem link : https://codeforces.com/contest/1845/problem/B

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
        ll x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        ll ans = 1;
        if (x2 > x1 && x3 > x1)
            ans += min(x2 - x1, x3 - x1);
        else if (x1 > x2 && x1 > x3)
            ans += min(x1 - x2, x1 - x3);
            
        if (y2 > y1 && y3 > y1)
            ans += min(y2 - y1, y3 - y1);
        else if (y1 > y2 && y1 > y3)
            ans += min(y1 - y2, y1 - y3);

        cout << ans << endl;
    }
    return 0;
}
