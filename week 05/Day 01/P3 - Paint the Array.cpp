//problem link : https://codeforces.com/contest/1618/problem/C

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
        ll n;
        cin>>n;
        ll arr[n],g1=0, g2=0;
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i%2==0)
                g1=__gcd(g1,arr[i]);
            else
                g2=__gcd(g2,arr[i]);
        }
        bool flag=true;
        ll ans=0;
        for(ll i=0; i<n; i+=2)
        {
            if(arr[i]%g2==0)
                flag=false;
        }
        if(flag)
            ans=g2;
        flag=true;
        for(int i=1; i<n; i+=2)
        {
            if(arr[i]%g1==0)
                flag=false;
        }
        if(flag)
            ans=g1;
        cout<<ans<<endl;
    }

    return 0;
}
