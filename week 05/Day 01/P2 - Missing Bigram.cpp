//problem link : https://codeforces.com/contest/1618/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s[n];
        for(int i=0; i<n-2; i++)
            cin>>s[i];
 
        string str=s[0];
        for(ll i=1; i<n-2; i++)
        {
            if(s[i][0]!=s[i-1][1]) 
                str+=s[i][0];
            str+=s[i][1];
        }
        if(str.size()<n)
            str+='a';
        cout<<str<<endl;
    }
    return 0;
}
