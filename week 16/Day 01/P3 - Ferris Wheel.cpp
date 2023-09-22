//problem link : https://cses.fi/problemset/task/1090/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<ll>());
    ll l = 0, r = n - 1;
    for (ll i = 0; i <= r; i++)
    {
        if ((arr[i] + arr[r]) <= x)
        {
            r--;
            l++;
        }
        else
            l++;
    }
    cout << l << endl;
    return 0;
}
