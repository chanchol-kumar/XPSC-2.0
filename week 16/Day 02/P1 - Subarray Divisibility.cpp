//problem link : https://cses.fi/problemset/task/1662

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    arr[sum] = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        arr[(sum % n + n) % n]++;
    }
    ll ans = 0;
    for (auto it : arr)
        ans += it * (it - 1) / 2;
    cout << ans << endl;
    return 0;
}
