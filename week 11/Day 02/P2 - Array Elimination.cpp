//problem link : https://codeforces.com/contest/1601/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

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
        ll bit[30];
        for (ll i = 0; i < 30; i++)
            bit[i] = 0;
        for (ll i = 0; i < 30; i++)
        {
            ll num = (1LL << i);
            for (ll j = 0; j < n; j++)
            {
                if ((arr[j] & num) != 0)
                    bit[i]++;
            }
        }
        for (ll k = 1; k <= n; k++)
        {
            bool flag = 0;
            for (ll i = 0; i < 30; i++)
            {
                if ((bit[i] % k) != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << k << " ";
        }
        cout << "\n";
    }
    return 0;
}
