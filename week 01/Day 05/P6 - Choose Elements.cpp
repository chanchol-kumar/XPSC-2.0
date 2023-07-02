//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    ll n,x,sum=0;
    cin>>n>>x;

    ll arr[n];
    for(ll i=0; i<n; i++) cin>>arr[i];

    sort(arr,arr+n);
    reverse(arr, arr+n);
    for(ll i=0; i<x; i++)
    {
        if(arr[i]<0)break;
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
