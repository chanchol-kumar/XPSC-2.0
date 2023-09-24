//problem link : https://codeforces.com/contest/1870/problem/B

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
        int n, m;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        int all = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            all |= arr2[i];
        }
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            x ^= arr1[i];
            y ^= arr1[i] | all;
        }
        cout << min(x, y) << " " << max(x, y) << "\n";
    }
    return 0;
}
