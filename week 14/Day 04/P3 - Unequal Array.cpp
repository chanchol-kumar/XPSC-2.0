//problem link : https://codeforces.com/problemset/problem/1672/C

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

        int mn = -1, mx = -1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                if (mn == -1)
                    mn = i;
                mx = i;
            }
        }
        if (mn == mx)
            cout << 0 << '\n';
        else
            cout << max(1, mx - mn - 1) << '\n';
    }
    return 0;
}
