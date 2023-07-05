//problem link : https://codeforces.com/contest/1690/problem/C

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
        int n,ans=0;
        cin>>n;
        int arr1[n],arr2[n];

        for(int i=0; i<n; i++)
            cin>>arr1[i];

        for(int i=0; i<n; i++)
            cin>>arr2[i];

        int mx=0;
        for(int i=0; i<n; i++)
        {
            if(arr1[i]>mx)
            {
                cout<<arr2[i]-arr1[i]<<" ";
                mx=arr2[i];
            }
            else
            {
                cout<<arr2[i]-mx<<" ";
                mx=arr2[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
