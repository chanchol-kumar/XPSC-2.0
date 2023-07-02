//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
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
        int arr[n];
 
        for(int i=0; i<n; i++)
            cin>>arr[i];
 
        int min_val = INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int res = arr[i]+arr[j]+j-i;
                if(res<min_val)
                    min_val=res;
            }
        }
        cout<<min_val<<endl;
    }
    return 0;
}
