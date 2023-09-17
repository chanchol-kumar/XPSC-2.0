//problem link : https://codeforces.com/contest/1867/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int query(int x)
{
    cout << x << endl;
    int y;
    cin >> y;
    assert(y != -2);
    return y;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    int mex = -1;
    for (int i = 0;; i++)
    {
        if (!mp.count(i))
        {
            mex = i;
            break;
        }
    }
    int last = mex;
    while (1)
    {
        int y = query(last);
        if (y == -1)
            return;
        last = y;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
