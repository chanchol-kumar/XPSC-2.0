//problem link : https://www.codechef.com/problems/BITEQU

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
        ll n,a,b;
        a=(1LL<<32);
        b=(1LL<<33);
        cin>>n;
        if(n==0)
            cout<<"1 3 4 5"<<endl;
        else if(n==1)
            cout<<"1 4 3 2"<<endl;
        else
        {
            if(n%2==0)
                cout<<a<<" "<<b<<" "<<1<<" "<<n+1<<endl;
            else
                cout<<a<<" "<<b<<" "<<1<<" "<<n-1<<endl;
        }
    }
    return 0;
}
