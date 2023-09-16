//problem link : https://codeforces.com/contest/1869/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 2e5 + 5;

int n, k, a, b;
pair<ll, ll> points[N];

ll getDist(pair<ll, ll> a, pair<ll, ll> b){
    return abs(a.first - b.first) + abs(a.second - b.second);
}
ll getMinDist(pair<ll, ll> a)
{
    ll ans = 1e18;
    for (int i = 0; i < k; i++)
        ans = min(ans, getDist(a, points[i]));
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> a >> b;
        a--;
        b--;
        for (int i = 0; i < n; i++)
            cin >> points[i].first >> points[i].second;
        ll ans = getDist(points[a], points[b]);
        if (k)
            ans = min(ans, getMinDist(points[a]) + getMinDist(points[b]));
        cout << ans << "\n";
    }
    return 0;
}

