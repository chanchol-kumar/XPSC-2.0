//problem link : https://codeforces.com/contest/1798/problem/B

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
        int n;
        cin>>n;
        map<int,int> lastOcc;
        for(int i=1; i<=n; i++)
        {
            int m;
            cin>>m;
            for(int j=1; j<=m; j++)
            {
                int x;
                cin>>x;
                lastOcc[x]=i;
            }
        }
        vector<int> ans(n+1,-1);
        for(auto it = lastOcc.begin(); it != lastOcc.end(); ++it)
        {
            int v = it->first;
            int last = it->second;

            if(ans[last] == -1)
                ans[last] = v;
        }
        bool flag=true;
        for(int i=1; i<=n; i++)
        {
            if(ans[i]==-1)
            {
                flag=false;
                break;
            }
        }
        if(!flag)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=1; i<=n; i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
