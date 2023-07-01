//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p=n,x=(n/2)+1;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==(n/2)+1 && j==(n/2)+1)
                cout<<"X";
            else if((i+j)==n+1)
                cout<<"/";
            else if(i==j)
                cout<<"\\";
            else
                cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}
