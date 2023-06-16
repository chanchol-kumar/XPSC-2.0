//probelm link : https://codeforces.com/contest/1692/problem/A

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
        int a,b,c,d,ans=0;
        cin>>a>>b>>c>>d;

        if(a<b) ans++;
        if(a<c) ans++;
        if(a<d) ans++;

        cout<<ans<<endl;
    }
    return 0;
}
