//problem link : https://www.codechef.com/problems/ABPLUSC

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
        ll x;
        cin>>x;
        if(x>1)
        {
            if(x<=1e6)
                cout<<1<<" "<<1<<" "<<x - 1<<endl;
            else if(x>1e6 && x%1000000!=0)
                cout<<1000000<<" "<<x/1000000<<" "<<x%1000000<<endl;
            else
                cout<<1000000<<" "<<x/1000000 - 1 <<" "<<1000000<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
