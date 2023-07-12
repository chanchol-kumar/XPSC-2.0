//problem link : https://codeforces.com/contest/1399/problem/C

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
        vector<ll>arr(n);
        for(ll i=0; i<n; i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end());
 
        ll ans=0;
        for(ll k=2; k<=100; k++)
        {
            ll cnt=0,i=0,j=n-1;
            while(i<j)
            {
                if(arr[i]+arr[j]>k)
                    j--;
                else if(arr[i]+arr[j]<k)
                    i++;
                else
                {
                    cnt++;
                    i++,j--;
                }
            }
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}
