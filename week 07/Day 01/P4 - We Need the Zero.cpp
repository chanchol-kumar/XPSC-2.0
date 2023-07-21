//problem link : https://codeforces.com/problemset/problem/1805/A

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
        ll n,ans=0;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            ans=(arr[i]^ans);
        }
        if(ans==0)
            cout<<0<<endl;
        else if(n&1)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }
 
    return 0;
}
