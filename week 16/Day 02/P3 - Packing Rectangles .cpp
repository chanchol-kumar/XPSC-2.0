//problem link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 1e14;
int w, h, cnt;
bool ok(ll l)
{ 
    ll a = (l / w);
    ll b = (l / h);
    if (b == 0)
        return false;
    return a >= (double)cnt / b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> w >> h >> cnt;
    ll l = 1, r = N, ans;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << '\n';
    return 0;
}
