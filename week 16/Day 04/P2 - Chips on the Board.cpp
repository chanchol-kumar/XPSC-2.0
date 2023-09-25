//problem link : https://codeforces.com/contest/1879/problem/B

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
        int n, x;
        cin >> n;
        ll sum1 = 0, sum2 = 0;
        int mn1 = 1e9, mn2 = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum1 += x;
            mn1 = min(mn1, x);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum2 += x;
            mn2 = min(mn2, x);
        }
        cout << min(sum1 + 1LL * n * mn2, sum2 + 1LL * n * mn1) << '\n';
    }
    return 0;
}
