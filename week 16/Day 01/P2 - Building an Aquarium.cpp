//problem link : https://codeforces.com/contest/1873/problem/E

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPossible(ll arr[], ll n, ll mid, ll k)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mid)
            cnt += (mid - arr[i]);
    }
    return cnt <= k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll low = 0, high = INT_MAX, ans = INT_MAX;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            if (isPossible(arr, n, mid, k))
            {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
