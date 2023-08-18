//problem link : https://codeforces.com/problemset/problem/1420/B

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        ll ans = 0;
        for (ll i = 30; i >= 0; i--)
        {
            ll cnt = 0;
            for (ll j = 0; j < n; j++)
            {
                if (arr[j] >= pow(2, i) && arr[j] < pow(2, (i + 1)))
                    cnt++;
            }
            ans += (cnt * (cnt - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
