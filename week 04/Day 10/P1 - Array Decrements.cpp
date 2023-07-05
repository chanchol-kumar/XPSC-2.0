//problem link : https://codeforces.com/contest/1690/problem/B

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

        bool flag = true;
        for(int i=0; i<n; i++)
            ans = max(ans,arr1[i]-arr2[i]);

        for(int i=0; i<n; i++)
        {
            arr1[i] -= ans;
            if(arr1[i]<0)
                arr1[i] = 0;
        }

        for(int i=0; i<n; i++)
        {
            if(arr1[i]!=arr2[i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
