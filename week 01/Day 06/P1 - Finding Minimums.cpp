//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C

#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    int n,x;
    cin>>n>>x;
    int arr[n];
 
    for(int i=0; i<n; i++)
        cin>>arr[i];
 
    int count=0;
    int Min=INT_MAX;
    for(int i=0; i<n; i++)
    {
        count++;
        if(arr[i]<Min)
            Min=arr[i];
 
        if(count==x)
        {
            cout<<Min<<" ";
            count=0;
            Min=INT_MAX;
        }
    }
    if(count != 0)
        cout<<Min<<" ";
    cout<<endl;
 
    return 0;
}
