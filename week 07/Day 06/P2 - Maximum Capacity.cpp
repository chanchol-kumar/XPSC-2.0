problem link : https://www.codechef.com/problems/MAXCAP

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
        int x,y;
        cin>>x>>y;
        if((x<=8) && (x*y<=500))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
