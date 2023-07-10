//problem link : https://codeforces.com/contest/1335/problem/A

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
        if(n==1 || n==2)
            cout<<"0"<<endl;
        else
            cout<<(n-1)/2<<endl;
    }
    return 0;
}
