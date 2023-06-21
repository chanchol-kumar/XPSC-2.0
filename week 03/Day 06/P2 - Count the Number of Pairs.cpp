//problem link : https://codeforces.com/contest/1800/problem/B

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
        string str;
        cin>>str;

        long long ans=0;
        map<char,int>mp;
        for(auto c:str)
            mp[c]++;

        for(char c='a'; c<='z'; c++)
        {
            int Min=min(mp[c],mp[(c-32)]);
            ans+=Min;
            mp[c]-=Min;
            mp[c-32]-=Min;
        }

        for(char c='a'; c<='z'; c++)
        {
            int add=max(mp[c],mp[c-32]);
            int Min=min(k,add/2);
            ans+=Min;
            k-=Min;
        }
        cout<<ans<<endl;
    }
    return 0;
}
