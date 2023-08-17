//problem link : https://codeforces.com/problemset/problem/1478/A

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            cnt = max(cnt, mp[x]);
        }
        cout << cnt << endl;
    }
    return 0;
}
