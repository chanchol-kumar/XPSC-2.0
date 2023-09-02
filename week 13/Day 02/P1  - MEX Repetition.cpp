// problem link : https://codeforces.com/contest/1863/problem/C

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
        int n, k;
        cin >> n >> k;
        k %= (n + 1);
        vector<int> a(n);
        vector<bool> vis(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            vis[a[i]] = 1;
        }
        int x = -1;
        for (int i = 0; i <= n; i++)
        {
            if (vis[i] == 0)
                x = i;
        }
        deque<int> dq(a.begin(), a.end());
        for (int i = 0; i < k; i++)
        {
            int val = x;
            dq.push_front(val);
            x = dq.back();
            dq.pop_back();
        }
        for (auto it : dq)
            cout << it << " ";
        cout << "\n";
    }
    return 0;
}
