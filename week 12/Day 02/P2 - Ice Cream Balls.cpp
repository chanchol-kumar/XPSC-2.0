//problem link : https://codeforces.com/contest/1862/problem/D

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
        ll n;
        cin >> n;
        ll l = 1, r = 1e10, ans;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if ((mid * (mid - 1)) / 2 <= n)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans + n - (ans * (ans - 1)) / 2 << endl;
    }
}
