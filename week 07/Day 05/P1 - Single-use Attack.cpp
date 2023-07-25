//problem link : https://www.codechef.com/problems/SINGLEUSE

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
        int a,b,c;
        cin>>a>>b>>c;

        int ans = ceil((a-c)/(b*1.0))+1;
        if(c>=a) ans=1;
        cout<<ans<<endl;
    }
    return 0;
}
