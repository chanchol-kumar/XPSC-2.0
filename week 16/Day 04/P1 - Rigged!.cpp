//problem link : https://codeforces.com/contest/1879/problem/A

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
        vector<int> a(n), b(n);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            if (i > 0 && a[i] >= a[0] && b[i] >= b[0])
                flag = false;
        }
        if (flag)
            cout << a[0] << "\n";
        else
            cout << "-1\n";
    }
    return 0;
}
