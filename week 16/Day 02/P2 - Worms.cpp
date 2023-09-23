//problem link : https://codeforces.com/problemset/problem/474/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 1e6 + 9;
int a[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[i] = a[i - 1] + x;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int k;
        cin >> k;
        int ans = lower_bound(a + 1, a + n + 1, k) - a;
        cout << ans << "\n";
    }
    return 0;
}
