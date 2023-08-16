//problem link : https://codeforces.com/contest/1859/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll sum = 0;
        int mn1 = INT_MAX, mn2 = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            int arr[m];
            for (int j = 0; j < m; j++)
                cin >> arr[j];
            sort(arr, arr + m);
            mn1 = min(mn1, arr[0]);
            mn2 = min(mn2, arr[1]);
            sum += arr[1];
        }
        cout << mn1 + sum - mn2 << '\n';
    }
    return 0;
}
