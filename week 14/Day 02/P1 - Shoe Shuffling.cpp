//problem link : https://codeforces.com/problemset/problem/1691/B

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
        ll n;
        cin >> n;
        vector<ll> arr(n), arr2(n);
        for (ll i = 0; i < n; ++i)
            cin >> arr[i];

        ll l = 0, r = 0;
        bool flag = true;
        for (ll i = 0; i < n; ++i)
            arr2[i] = i + 1;

        while (r < n)
        {
            while (r < n - 1 && arr[r] == arr[r + 1])
                r++;
            if (l == r)
                flag = false;
            else
                rotate(arr2.begin() + l, arr2.begin() + r, arr2.begin() + r + 1);
            l = r + 1;
            r++;
        }
        if (flag)
        {
            for (auto &it : arr2)
                cout << it << " ";
            cout << "\n";
        }
        else
            cout << "-1\n";
    }
    return 0;
}
