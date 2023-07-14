//problem link : https://www.codechef.com/problems/MAXIMSCORE

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
        int n,x,mx= INT_MAX;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(i==0)
                x = max(abs(arr[i]-arr[i+1]),0);
            else if(i==n-1)
                x = max(abs(arr[i]-arr[i-1]),0);
            else
                x = max(abs(arr[i]-arr[i-1]), abs(arr[i]-arr[i+1]));

            mx = min(mx,x);
        }
        cout<<mx<<endl;
    }

    return 0;
}
