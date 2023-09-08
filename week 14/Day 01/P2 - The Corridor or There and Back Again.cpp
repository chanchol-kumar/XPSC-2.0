// problem link : https://codeforces.com/contest/1872/problem/B

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
        vector<int> d(n), s(n);
        for (int j = 0; j < n; j++)
            cin >> d[j] >> s[j];
        int mn = INT_MAX;
        for (int j = 0; j < n; j++)
            mn = min(mn, d[j] + (s[j] - 1) / 2);
        cout << mn << endl;
    }
    return 0;
}
