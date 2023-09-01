// problem link : https://codeforces.com/problemset/problem/1225/B1

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
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> arr(n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll mn = INT_MAX;
        for (int i = 0; i <= n - d; i++)
        {
            for (int j = i; j < i + d; j++)
            {
                s.insert(arr[j]);
            }
            ll l = s.size();
            mn = min(mn, l);
            s.clear();
        }
        cout << mn << endl;
    }
    return 0;
}
