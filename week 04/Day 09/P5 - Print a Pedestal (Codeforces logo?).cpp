//problem link : https://codeforces.com/contest/1690/problem/A

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
        int x = n/3;
        if(n%3==0)
            cout<<x<<" "<<x+1<<" "<<x-1<<endl;
        else if(n%3==1)
            cout<<x<<" "<<x+2<<" "<<x-1<<endl;
        else
            cout<<x+1<<" "<<x+2<<" "<<x-1<<endl;
    }
    return 0;
}

