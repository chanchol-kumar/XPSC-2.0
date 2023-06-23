//problem link : https://codeforces.com/contest/1843/problem/C

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sum=n;
        while(n>0)
        {
            sum+=n/2;
            n=n/2;
        }
        cout<<sum<<endl;
    }
    return 0;
}

