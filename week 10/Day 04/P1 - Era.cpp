//problem link : https://codeforces.com/contest/1604/problem/A

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
        int arr[n];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] > i)
                ans = max(ans, arr[i] - i);
        }
        cout << ans << endl;
    }
    return 0;
}
