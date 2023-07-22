//problem link : https://codeforces.com/problemset/problem/805/B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
 
    ll n,j=0;
    cin>>n;
    string s[]={"b","b","a","a"};
 
    for(int i=0; i<n; i++)
    {
        cout<<s[j];
        j++;
        if(j==4)
        j=0;
    }
    cout<<"\n";
 
    return 0;
}
