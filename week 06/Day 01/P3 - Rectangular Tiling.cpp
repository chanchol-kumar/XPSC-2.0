//problem link : https://www.codechef.com/problems/RCT

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
        int a,b;
        cin>>a>>b;
        if(a%2==0 || b%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
