//problem link : https://codeforces.com/contest/1213/problem/B

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
        ll n,cnt=0;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];

        ll x=v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(v[i]>x)
                cnt++;
            else
                x = v[i];
        }
        cout <<cnt<<endl;
    }
    return 0;
}
