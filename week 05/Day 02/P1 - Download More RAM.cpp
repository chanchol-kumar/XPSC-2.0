//problem link : https://codeforces.com/contest/1629/problem/A

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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>v(n);
        for(int i=0; i<n; i++)
            cin>>v[i].first;
        for(int i=0; i<n; i++)
            cin>>v[i].second;

        sort(v.begin(),v.end());
        int ans = k;
        for(auto it : v)
        {
            if(it.first<=ans)
                ans += it.second;
        }
        cout<<ans<<endl;
    }
    return 0;
}
