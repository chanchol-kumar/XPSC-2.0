//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include<bits/stdc++.h>
using namespace std;

bool lucky(int n)
{
    while(n>0)
    {
        if(n%10!=4 && n%10!=7)
            return false;
        n/=10;
    }
    return true;
}

int main()
{
    int a,b,flag=0;
    cin>>a>>b;

    for(int i=a; i<=b; i++)
    {
        if(lucky(i))
        {
            cout<<i<<" ";
            flag=1;
        }
    }
    if(flag==0)
        cout<<"-1\n";

    return 0;
}
