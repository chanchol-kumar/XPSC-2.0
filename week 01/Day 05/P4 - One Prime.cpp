//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    if(n<2)
        cout<<"NO\n";
    else
    {
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
