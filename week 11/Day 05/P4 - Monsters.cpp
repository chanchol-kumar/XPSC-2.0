//problem link : https://codeforces.com/contest/1849/problem/B

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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> ans;
        vector<pair<int, int>> idx;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % k == 0)
                ans.push_back(i + 1);
            else
                idx.push_back({arr[i] % k, i + 1});
        }

        sort(idx.begin(), idx.end(), [&](pair<int, int> x, pair<int, int> y)
             {
        if(x.first==y.first) return (x.second<y.second);
        return (x.first>y.first); });

        for (auto i : idx)
            ans.push_back(i.second);

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
