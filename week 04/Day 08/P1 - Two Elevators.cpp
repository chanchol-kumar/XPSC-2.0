//problem link : https://codeforces.com/contest/1729/problem/A

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
        int a,b,c;
        cin>>a>>b>>c;

        ll ans1 = a-1;
        ll ans2 =abs(b-c)+c-1;

        if(ans1<ans2) cout<<1<<endl;
        else if(ans1>ans2) cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}
