//problem link : https://codeforces.com/contest/1791/problem/D

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
 
        vector<int> pre(n, 0), suf(n, 0);
        set<char> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
            pre[i] = s.size();
        }
        s.clear();
        for (int i = n - 1; i > -1; i--)
        {
            s.insert(a[i]);
            suf[i] = s.size();
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
            ans = max(ans, pre[i] + suf[i + 1]);
        cout << ans << endl;
    }
 
    return 0;
}
