//problem link : https://codeforces.com/contest/1614/problem/A

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
        ll n, l, r, k;
        cin >> n >> l >> r >> k;
        ll sum = 0, cnt = 0;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
 
        sort(arr, arr + n);
        for (ll i = 0; i < n; i++)
        {
            if (sum >= k)
            {
                break;
            }
            else if (arr[i] <= r && arr[i] >= l && (sum + arr[i]) <= k)
            {
                sum += arr[i];
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
