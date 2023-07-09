//problem link : https://codeforces.com/contest/1808/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int l, r, mx = 0;
        cin >> l >> r;
        int ans = l;
        for (int i = l; i <= r; i++)
        {
            string s = to_string(i);
            sort(s.begin(), s.end());
            int sz = s[s.size() - 1] - s[0];
            if (mx < sz)
            {
                mx = sz;
                ans = i;
            }
            if (mx == 9)
                break;
        }
        cout << ans << endl;
        ans=0;
    }
    return 0;
}

