//problem link : https://codeforces.com/contest/1729/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,h,m;
        cin>>n>>h>>m;

        int minute = h*60+m;
        int ans = 24*60;

        while(n--)
        {
            int x,y;
            cin>>x>>y;

            int current_minute = x * 60 + y;
            int p = current_minute - minute;
            if(p>=0)
                ans = min(ans,p);
            else
                ans = min(ans,24*60+p);
        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }

    return 0;
}
