// problem link : https://codeforces.com/problemset/problem/1154/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());
    a.resize(unique(a.begin(), a.end()) - a.begin());
    
    if (a.size() > 3)
        cout << -1 << endl;
    else
    {
        if (a.size() == 1)
            cout << 0 << endl;
        else if (a.size() == 2)
        {
            if ((a[1] - a[0]) % 2 == 0)
                cout << (a[1] - a[0]) / 2 << endl;
            else
                cout << a[1] - a[0] << endl;
        }
        else
        {
            if (a[1] - a[0] != a[2] - a[1])
                cout << -1 << endl;
            else
                cout << a[1] - a[0] << endl;
        }
    }
    return 0;
}
