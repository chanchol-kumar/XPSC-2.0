//problem link : https://codeforces.com/contest/1870/problem/D

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
        ll n, i,a, b;
        cin >> n;
        ll arr[n+1], ans[n+1];
        memset(ans, 0, sizeof(ans));
        for (i = 1; i <= n; i++)
            cin >> arr[i];
        int k;
        cin >> k;
        ll st = 1, val = 0, last = INT_MAX;
        while (st <= n)
        {
            ll mn = INT_MAX;
            for (i = n; i >= st; i--)
                mn = min(mn, arr[i]);
            a = k / (mn - val);
            a = min(a, last);
            last = a;
            if (a == 0)
                break;
            for (i = n; i >= st; i--)
            {
                if (arr[i] == mn)
                    break;
            }
            b = i;
            while (i >= st)
            {
                ans[i] += a;
                i--;
            }
            k -= (a * (mn - val));
            val = arr[b];
            st = b + 1;
        }
        for (i = 1; i <= n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
