//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    long long t;
    cin>>t;
    while(t--)
    {
        long long l,r,mx,mn;
        cin>>l>>r;
        mx=max(l,r);
        mn=min(l,r);
        mn--;
        cout<<mx*(mx+1)/2-mn*(mn+1)/2<<endl;
    } 
    return 0;
}
