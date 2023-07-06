//problem link : https://codeforces.com/contest/1674/problem/A

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
 
        if(a==b)
            cout<<1<<" "<<1<<endl;
        else if(b%a!=0)
            cout<<0<<" "<<0<<endl;
        else
            cout<<1<<" "<<b/a<<endl;
    }
 
    return 0;
}
