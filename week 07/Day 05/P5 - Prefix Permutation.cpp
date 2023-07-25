//problem link : https://www.codechef.com/problems/SUMPERM

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
        ll sum = (n*(n+1))/2;

        if(sum%n==0)
            cout<<-1<<endl;
        else
        {
            for(int i=1; i<=n; i+=2)
                cout<<i+1<<" "<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
