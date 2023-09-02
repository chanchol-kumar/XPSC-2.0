//problem link : https://codeforces.com/contest/1863/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x--;
            p[x] = i;
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
            ans += (p[i - 1] > p[i]);
        cout << ans << "\n";
    }
    return 0;
}
