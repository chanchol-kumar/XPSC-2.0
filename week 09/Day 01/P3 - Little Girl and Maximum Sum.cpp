//problem link : https://codeforces.com/problemset/problem/276/C

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n), pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        pre[l - 1]++;
        if (r < n)
            pre[r]--;
    }
    for (int i = 1; i < n; i++)
    {
        pre[i] += pre[i - 1];
    }
    sort(pre.begin(), pre.end());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] * pre[i];
    }
    cout << sum << endl;

    return 0;
}
