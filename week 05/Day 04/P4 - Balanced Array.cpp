//problem link : https://codeforces.com/contest/1343/problem/B

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
        int n;
        cin>>n;
        n/=2;
        if(n%2==1)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(int i=1;i<=n;i++)
            cout<<i*2<<" ";
 
        for(int i=1;i<n;i++)
            cout<<i*2-1<<" ";
 
        cout<<3*n-1<<endl;
    }
 
    return 0;
}
