//problem link : https://codeforces.com/contest/1744/problem/A

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
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
        vector<int>arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];

        string s;
        cin>>s;
        map<int,set<char>> mp;
        for(int i=0; i<n; i++)
            mp[arr[i]].insert(s[i]);

        bool flag=false;
        for(auto u:mp)
        {
            if(u.second.size()>1)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
