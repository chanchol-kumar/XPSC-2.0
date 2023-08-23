//problem link : https://codeforces.com/contest/1860/problem/C

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
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int mn1 = INT_MAX;
        int mn2 = INT_MAX;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mn1 && arr[i] < mn2)
            {
                ans++;
                mn2 = min(mn2, arr[i]);
            }
            mn1 = min(mn1, arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
