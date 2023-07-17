//problem link : https://www.codechef.com/problems/MONOPOLY2

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
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int total = a+b+c+d;
        int mx = max(a,max(b,max(c,d)));

        if(mx>total-mx)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
