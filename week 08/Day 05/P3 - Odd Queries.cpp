//problem link : https://codeforces.com/contest/1807/problem/D

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> arr(n + 1, 0),pref(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            pref[i] = pref[i - 1] + arr[i];
        }

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum = pref[n];
            sum -= (pref[r] - pref[l - 1]);
            sum += ((r - l + 1LL) * k);
            if (sum % 2LL == 1LL)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
