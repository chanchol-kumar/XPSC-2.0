problem link : https://codeforces.com/contest/1335/problem/B

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
        int n,a,b;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++)
            cout<<char('a'+i%b);
        cout<<"\n";
    }
    return 0;
}
