//problem link : https://www.codechef.com/problems/NAS_2523

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
        if(n%2==1)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=n; i>0; i--)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
