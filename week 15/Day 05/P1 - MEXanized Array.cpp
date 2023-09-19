//problem link : https://codeforces.com/contest/1870/problem/A

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
        ll n, i, k, x;
        cin >> n >> k >> x;
        if (k > n || x < k - 1)
            cout << "-1\n";
        else
        {
            ll ans = (k * (k - 1)) / 2;
            if (x != k)
                ans += (n - k) * x;
            else
                ans += (n - k) * (x - 1);
            cout << ans << "\n";
        }
    }
    return 0;
}
