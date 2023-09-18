//problem link : https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> p(n), a(m);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(p.begin(), p.end());
    sort(a.begin(), a.end());
    int cnt = 0;
    for (int i = 0, j = 0; i < n || j < m;)
    {
        if (abs(p[i] - a[j]) <= k)
        {
            cnt++;
            if (i >= n - 1)
                break;
            else
                i++;
            if (j >= m - 1)
                break;
            else
                j++;
        }
        else if (p[i] < a[j])
            i >= n - 1 ? j++ : i++;
        else
            j >= m - 1 ? i++ : j++;
    }
    cout << cnt << endl;
    return 0;
}
