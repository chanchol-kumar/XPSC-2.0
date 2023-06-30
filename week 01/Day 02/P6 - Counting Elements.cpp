//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, count=0;
    cin>>n;
    int arr[n];
 
    map<int,int> freq;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    sort(arr,arr+n);
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]+1==arr[i+1] && freq[arr[i]]>=1)
            count += freq[arr[i]];
    }
    cout<<count<<endl;
 
    return 0;
}
