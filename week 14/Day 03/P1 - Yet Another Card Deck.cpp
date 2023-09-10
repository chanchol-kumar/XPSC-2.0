//problem link : https://codeforces.com/problemset/problem/1511/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (mp[arr[i]] == 0)
            mp[arr[i]] = i + 1;
    }
    while (q--)
    {
        int t;
        cin >> t;
        int ans = mp[t];
        cout << mp[t] << " ";
        mp.erase(t);
        for (auto it : mp)
        {
            if (it.second < ans)
            {
                mp[it.first] = it.second + 1;
            }
        }
        mp[t] = 1;
    }
    cout << endl;
    return 0;
}
