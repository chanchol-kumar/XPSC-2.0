// problem link : https://codeforces.com/problemset/problem/1051/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll l,r;
    cin>>l>>r;
    cout<<"YES\n";
    while(l<r)
    {
        cout<<l<<" "<<l+1<<"\n";
        l+=2;
    }
    return 0;
}
