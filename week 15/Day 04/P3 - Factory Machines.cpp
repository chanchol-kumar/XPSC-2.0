//problem link : https://cses.fi/problemset/task/1620/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    ll l = 0, r = 1e18, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll Products = 0;
        for (int i = 0; i < n; i++)
        {
            Products += (mid / arr[i]);
            if (Products >= k)
                break;
        }
        if (Products >= k)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << "\n";
    return 0;
}
