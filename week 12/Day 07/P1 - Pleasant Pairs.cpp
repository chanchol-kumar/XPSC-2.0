// problem link : https://codeforces.com/problemset/problem/1541/B

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
        ll arr[n + 1];
        for (int i = 1; i < n + 1; i++)
            cin >> arr[i];
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = arr[i] - i; j <= n; j += arr[i])
            {
                if (j >= 0 && arr[i] * arr[j] == i + j && i < j)
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
