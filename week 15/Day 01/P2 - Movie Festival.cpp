//problem link : https://cses.fi/problemset/task/1629

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 2e5 + 9;
int a[N], b[N];
 
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({b[i], a[i]});
    }
    sort(v.begin(), v.end());
    int ans = 0, last = 0;
    for (auto it : v)
    {
        if (it.second >= last)
        {
            ans++;
            last = it.first;
        }
    }
    cout << ans << "\n";
    return 0;
}
