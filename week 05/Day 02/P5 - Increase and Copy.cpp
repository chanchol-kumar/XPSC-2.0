//problem link : https://codeforces.com/contest/1426/problem/C

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
        int ans=INT_MAX;
        for(int i=1;i<=sqrt(n);i++)
            ans = min(ans, i-1+((n-i)+i-1)/i);
        cout<<ans<<endl;
    }
    return 0;
}
