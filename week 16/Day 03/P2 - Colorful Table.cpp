//problem link : https://codeforces.com/contest/1870/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 1e5 + 5;
vector<int> all[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i <= k; i++)
            all[i].clear();
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            all[a[i]].push_back(i);
        }
        set<int> st;
        for (int i = 0; i < n; i++)
            st.insert(i);
        for (int i = 1; i <= k; i++)
        {
            if (all[i].empty())
            {
                cout << "0 ";
                continue;
            }
            assert(st.size());
            int mn = *st.begin();
            int mx = *st.rbegin();
            int ans = (mx - mn + 1) * 2;
            cout << ans << " ";
            for (int j : all[i])
                st.erase(j);
        }
        cout << "\n";
    }
    return 0;
}
