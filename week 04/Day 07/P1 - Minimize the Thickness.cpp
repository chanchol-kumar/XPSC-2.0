//problem link : https://codeforces.com/contest/1741/problem/C

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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        int ans=n;
        ll target=0;
        for(int i=0; i<n; i++)
        {
            target+=a[i];
            ll sum=0;
            int len=0,mx=i+1;
            bool flag=false;
            for(int j=i+1; j<n; j++)
            {
                if(sum+a[j]>target)break;

                if(j==n-1 && sum+a[j]==target)
                {
                    mx=max(mx,len+1);
                    flag=true;
                    break;
                }
                sum+=a[j];
                len++;
                if(sum==target)
                {
                    mx=max(mx,len);
                    len=0,sum=0;
                }
            }
            if(flag)
                ans=min(ans,mx);
        }
        cout<<ans<<endl;
    }
    return 0;
}
