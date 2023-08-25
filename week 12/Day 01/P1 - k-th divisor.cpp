//problem link : https://codeforces.com/problemset/problem/762/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> arr;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
            if ((n / i) != i)
                arr.push_back(n / i);
        }
    }
    sort(arr.begin(), arr.end());
    if (arr.size() < k)
        cout << -1 << '\n';
    else
        cout << arr[k - 1] << '\n';
    return 0;
}
