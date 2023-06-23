//problem link : https://www.codechef.com/problems/MOONSOON

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;

        ll car[n],outlet[m];
        for(ll i=0; i<n; i++)
            cin>>car[i];
        for(ll i=0; i<m; i++)
            cin>>outlet[i];

        sort(car,car+n, greater<ll>());
        sort(outlet,outlet+m, greater<ll>());

        ll ans = 0;
        for(ll i=0; i<min(n,m); i++)
            ans+=min(car[i],outlet[i]*h);
        cout<<ans<<endl;
    }

    return 0;
}

