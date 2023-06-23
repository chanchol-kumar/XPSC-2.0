//problem link : https://codeforces.com/contest/1843/problem/B

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
        int n;
        cin>>n;
        vector<int>arr(n);
 
        for(int i=0; i<n; i++)
            cin>>arr[i];
 
        sort(arr.begin(),arr.end());
        int x=arr.size();
 
        int i=0,j=x-1,sum=0;
        while(i<j)
        {
            sum+=arr[j]-arr[i];
            i++,j--;
        }
        cout<<sum<<endl;
    }
 
    return 0;
}
