//problem link : https://codeforces.com/problemset/problem/1828/A

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
        for(int i=1;i<=n;i++) 
            cout<<i*2<<" ";
        cout<<"\n";
    }
 
    return 0;
}
