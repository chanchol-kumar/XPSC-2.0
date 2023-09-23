//problem link : https://codeforces.com/problemset/problem/1433/D

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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<pair<int, int>> ans;
        int idx = -1;
        for (int i = 1; i < n; ++i)
        {
            if (arr[i] != arr[0])
            {
                idx = i;
                ans.push_back({1, i + 1});
            }
        }
        if (idx == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < n; ++i)
        {
            if (arr[i] == arr[0])
                ans.push_back({idx + 1, i + 1});
        }
        cout << "YES" << endl;
        for (auto it : ans)
            cout << it.first << " " << it.second << endl;
    }
    return 0;
}
