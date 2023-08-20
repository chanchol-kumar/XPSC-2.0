//problem link : https://lightoj.com/problem/hex-a-bonacci

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e4 + 10;
#define MOD 10000007
int a, b, c, d, e, f, n, cnt = 1;
int dp[N];

int hex(int n)
{
    if (n == 0) return a % MOD;
    if (n == 1) return b % MOD;
    if (n == 2) return c % MOD;
    if (n == 3) return d % MOD;
    if (n == 4) return e % MOD;
    if (n == 5) return f % MOD;

    int &ret = dp[n];
    if (ret != -1) return ret;

    ret = hex(n - 1) % MOD + hex(n - 2) % MOD + hex(n - 3) % MOD + hex(n - 4) % MOD + hex(n - 5) % MOD + hex(n - 6) % MOD;
    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d >> e >> f >> n;
        memset(dp, -1, sizeof(dp));
        cout << "Case " << cnt++ << ": " << (hex(n) + MOD) % MOD << "\n";
    }
    return 0;
}
