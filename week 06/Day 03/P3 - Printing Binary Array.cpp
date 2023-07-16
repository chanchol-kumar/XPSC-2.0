//problem link : https://www.codechef.com/problems/PRINTINGBIN

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
        int n,x;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x==0)
                cout<<1<<" ";
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
