//problem link : https://codeforces.com/contest/1722/problem/D 

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
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<long long> d;
        long long total=0,L,R;
        int minCng=0;

        for(int i=0; i<n; i++)
        {
            L=i;
            R=n-i-1;
            if(s[i]=='L')
            {
                if(R>L)
                {
                    minCng++;
                    total+=R;
                    d.push_back(R-L);
                }
                else
                    total+=L;
            }
            else
            {
                if(L>R)
                {
                    minCng++;
                    d.push_back(L-R);
                    total+=L;
                }
                else
                    total+=R;
            }
        }
        vector<long long> ans(n+1);
        for(int i=minCng; i<=n; i++)
            ans[i]=total;

        sort(d.begin(),d.end(),greater<long long>());
        for(int i=minCng-1; i>=1; i--)
        {
            total-=d.back();
            d.pop_back();
            ans[i]=total;
        }

        for(int i=1; i<=n; i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
