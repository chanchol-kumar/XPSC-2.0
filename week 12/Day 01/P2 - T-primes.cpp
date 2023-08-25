//problem link : https://codeforces.com/contest/230/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll x;
    while(n--)
    {
        cin>>x;
        ll y=sqrt(x);
        if(y*y==x)
        {
            if(y==1)
                cout<<"NO\n";
            else
            {
                bool flag=1;
                for(ll i=2;i*i<=y;i++)
                {
                    if(y%i==0)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
