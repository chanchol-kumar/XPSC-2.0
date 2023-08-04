//problem link : https://codeforces.com/contest/845/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;
    map<int, ll> pre;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        pre[l]++;
        pre[r + 1]--;
    }
    ll sum = 0;
    bool flag = true;
    for (auto it : pre)
    {
        sum += it.second;
        if (sum > 2)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
