//problem link : https://codeforces.com/contest/1642/problem/C

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
        ll n,x,ans=0;
        cin>>n>>x;
        vector<ll>a(n);
        for(ll i=0; i<n; i++)
            cin>>a[i];

        sort(a.begin(),a.end());
        for(ll i=0; i<n; i++)
        {
            if(a[i]!=-1)
            {
                ll target=a[i]*x;
                ll found=-1;
                ll low=i+1,high=n-1;
                while(low<=high)
                {
                    ll mid=low+(high-low)/2;
                    if(a[mid]==target)
                    {
                        found=mid;
                        high=mid-1;
                    }
                    if(a[mid]<target)
                        low=mid+1;
                    else
                        high=mid-1;
                }
                if(found==-1)
                    ans++;
                else
                    a[found]=-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
