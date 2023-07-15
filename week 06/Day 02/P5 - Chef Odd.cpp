//problem link : https://www.codechef.com/problems/CHEFODD

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
        ll n,k;
        cin>>n>>k;
        if(k*2>n)
        {
            cout<<"NO\n";
            continue;
        }
        ll ans=(n/2)+(n%2);
        if((ans-k)%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
