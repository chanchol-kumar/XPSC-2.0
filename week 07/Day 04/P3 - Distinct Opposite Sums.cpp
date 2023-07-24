//problem link : https://www.codechef.com/problems/DISTOPPSUMS

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
        for(int i=1; i<n; i+=2)
            cout<<i<<" ";
        for(int i=n; i>=2; i-=2)
            cout<<i<<" ";
        cout<<"\n";
    }
  
    return 0;
}
