//problem link : https://codeforces.com/contest/1867/problem/B

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
        string s;
        cin >> s;
        ll l = 0, r = n - 1;
        int arr[n + 1];
        memset(arr, 0, sizeof(arr));
        ll x = 0;
        while (l <= r)
        {
            x += (s[l] != s[r]);
            l++;
            r--;
        }
        if (n % 2 == 0)
        {
            for (ll i = x; i <= n - x; i += 2)
                arr[i] = 1;
        }
        else
        {
            for (ll i = x; i <= n - x; i++)
                arr[i] = 1;
        }
        for (ll i = 0; i <= n; i++)
            cout << arr[i];
        cout << endl;
    }
    return 0;
}
