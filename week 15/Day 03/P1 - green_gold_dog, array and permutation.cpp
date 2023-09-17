//problem link : https://codeforces.com/contest/1867/problem/A

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
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back({x, i});
        }
        sort(arr.begin(), arr.end());

        for (int i = 0, j = n; i < n; i++, j--)
            arr[i].first = j;

        int ans[n];
        for (int i = 0; i < n; i++)
            ans[arr[i].second] = arr[i].first;

        for (int i = 0; i < n; i++)
            cout << ans[i] << ' ';
        cout << endl;
    }
    return 0;
}
