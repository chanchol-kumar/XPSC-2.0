//problem link : https://codeforces.com/contest/1843/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll total=0,obs=0;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x<0 && flag)
            {
                obs++;
                flag=false;
            }
            if(x>0)
                flag=true;
            total += abs(x);
        }
        cout<<total<<" "<<obs<<endl;
    }
    return 0;
}
