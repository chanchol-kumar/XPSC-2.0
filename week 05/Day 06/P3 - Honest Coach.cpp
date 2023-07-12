Problem link : https://codeforces.com/contest/1360/problem/B

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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int dif = INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            if(dif>abs(arr[i]-arr[i+1]))
                dif = abs(arr[i]-arr[i+1]);
        }
        cout<<dif<<"\n";
    }
    return 0;
}
