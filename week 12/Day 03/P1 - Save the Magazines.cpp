//problem link : https://codeforces.com/problemset/problem/1743/C

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
        string s;
        cin >> s;
        s = '0' + s;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        int ans = 0, x = 0;
        while (x <= n)
        {
            int mn = arr[x];
            int sm = arr[x];
            int j = x + 1;
            while (j <= n && s[j] == '1')
            {
                mn = min(mn, arr[j]);
                sm += arr[j];
                j++;
            }
            ans += sm - mn;
            x = j;
        }
        cout << ans << endl;
    }
    return 0;
}
