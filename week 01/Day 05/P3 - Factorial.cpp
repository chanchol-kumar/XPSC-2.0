//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        long long sum=1;
        cin>>n;
        if(n==0)
            cout<<"1\n";
        else
        {
            for(int i=1; i<=n; i++)
                sum*=i;

            cout<<sum<<"\n";
        }
    }

    return 0;
}
