//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    int n,x;
    cin>>n>>x;
 
    int fre[x+1]= {0};
    for(int i=1; i<=n; i++)
    {
        int p;
        cin>>p;
        fre[p]++;
    }
    for(int i=1; i<=x; i++)
        cout<<fre[i]<<endl;
 
    return 0;
}
