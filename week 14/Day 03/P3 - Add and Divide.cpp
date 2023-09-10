// problem link : https://codeforces.com/problemset/problem/1485/A

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
        ll a, b;
        cin >> a >> b;
        int cnt = 0,mn = INT_MAX;
        for (ll i = 0; i * i <= a; i++)
        {
            if (b == 1 && i == 0)
                continue;
            cnt = i;
            ll c = a;
            while (c)
            {
                c /= (b + i);
                cnt++;
            }
            mn = min(mn, cnt);
        }
        cout << mn << endl;
    }
    return 0;
}
