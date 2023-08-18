//proble link : https://codeforces.com/problemset/problem/1514/B

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll ans = 1;
        for (int i = 0; i < k; i++)
            ans = (ans * n) % MOD;
        cout << ans << "\n";
    }
    return 0;
}
