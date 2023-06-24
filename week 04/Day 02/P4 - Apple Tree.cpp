//problem link : https://codeforces.com/contest/1843/problem/D

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mx = 200005;
vector<ll> v[mx];
ll leaf[mx];
bool visited[mx];

ll count_leaf(ll src)
{
    visited[src] = true;
    ll ans = 0;
    bool flag = true;
    for (ll i = 0; i < v[src].size(); i++)
    {
        if (!visited[v[src][i]])
        {
            flag = false;
            ans += count_leaf(v[src][i]);
        }
    }
    if(flag)
        return leaf[src] = 1;
    else
        return leaf[src] = ans;
}
int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll e=n-1;
        memset(visited, false, sizeof(visited));
        memset(leaf, 0, sizeof(leaf));
        while (e--)
        {
            ll a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        count_leaf(1);
        ll q;
        cin>>q;
        while(q--)
        {
            ll x,y;
            cin>>x>>y;
            cout<<leaf[x]*leaf[y]<<endl;
        }

        for (ll i = 1; i <= n; i++)
            v[i].clear();
    }
    return 0;
}
