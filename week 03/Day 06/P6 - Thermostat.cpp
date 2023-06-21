//problem link : https://codeforces.com/contest/1759/problem/C

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r,x;
        cin>>l>>r>>x;
        long long a,b;
        cin>>a>>b;

        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }

        if(abs(b-a)>=x)
        {
            cout<<1<<endl;
            continue;
        }

        if(b>a)
        {
            if(b+x<=r || a-x>=l)
                cout<<2<<endl;
            else if(a+x<=r && b-l>=x)
                cout<<3<<endl;
            else
                cout<<-1<<endl;
        }
        else
        {
            if(a+x<=r || b-x>=l)
                cout<<2<<endl;
            else if(a-x>=l && r-b>=x)
                cout<<3<<endl;
            else
                cout<<-1<<endl;
        }
    }

    return 0;
}
