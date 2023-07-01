//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    string s,p;
    cin>>s;
 
    p=s;
    reverse(p.begin(),p.end());
    if(s==p)  cout<<"YES\n";
    else  cout<<"NO\n";
 
    return 0;
}
