//problem link : https://codeforces.com/contest/1833/problem/B

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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a.begin(),a.end());

        vector<int> b(n);
        for(int i=0; i<n; i++)
            cin>>b[i];
        sort(b.begin(),b.end());

        vector<int> ans(n);
        for(int i=0; i<n; i++)
            ans[a[i].second]=b[i];

        for(int i=0; i<n; i++)
            cout<<ans[i]<<" ";

        cout<<endl;
    }
    return 0;
}
