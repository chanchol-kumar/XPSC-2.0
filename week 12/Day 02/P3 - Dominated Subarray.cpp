//problem link : https://codeforces.com/problemset/problem/1257/C

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
        map<int, int> mp;
        int ans = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (mp[x] == 0)
                mp[x] = i;
            else
            {
                ans = min(ans, i - mp[x] + 1);
                mp[x] = i;
            }
        }
        if (ans == INT_MAX)
            cout << "-1\n";
        else
            cout << ans << "\n";
    }
}
