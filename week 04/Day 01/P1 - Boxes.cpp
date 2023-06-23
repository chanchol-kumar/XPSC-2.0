//problem link : https://www.codechef.com/problems/CS2023_PON

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],mx=0;
        for(ll i=0;i<n;i++)
            cin>>arr[i];

        sort(arr,arr+n);
        ll last;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            ll ans=0;
            while(arr[i]>1)
            {
                ans++;
                arr[i]/=2;
            }
            mp[ans]++;
            mx=max(mx,ans);
        }
        ll result=ceil(mp[mx]*1.0/2);
        cout<<result<<endl;
    }
    return 0;
}
