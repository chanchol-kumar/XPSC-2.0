//problem link : https://codeforces.com/contest/1676/problem/C

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        string a[n];

        int ans=INT_MAX,dis,sum;
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum = 0;
                for(int k=0;k<x;k++)
                {
                    dis=abs(a[i][k]-a[j][k]);
                    sum+=dis;
                }
                if(sum < ans)
                    ans = sum;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
