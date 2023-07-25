//problem link : https://www.codechef.com/problems/RUNCOMPARE

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
        int a[n],b[n],cnt=0;

        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];

        for(int i=0; i<n; i++)
        {
            if(a[i]<=2*b[i] && b[i]<=2*a[i])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

