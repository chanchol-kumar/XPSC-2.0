//problem link : https://codeforces.com/contest/1475/problem/A

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
        ll n;
        cin>>n;

        if(n&(n-1)!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
