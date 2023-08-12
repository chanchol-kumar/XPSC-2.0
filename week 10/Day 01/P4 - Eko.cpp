//problem link : https://www.spoj.com/problems/EKO/fbclid=IwAR2CCiz_wINq8BicbHBIpecjLgIPJhb-_a5R7rwYC_8-7fO53V0rX_4qYlE

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n], mx = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    ll l = 0, h = mx, ans = 0;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        ll tmp = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] > mid)
                tmp += (arr[i] - mid);
        }
        if (tmp >= m)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    cout << ans << endl;
    return 0;
}
