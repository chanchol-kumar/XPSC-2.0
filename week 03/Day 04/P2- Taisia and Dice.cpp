//problem link : https://codeforces.com/contest/1790/problem/B

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main()
{
    optimize()
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        int arr[n];
        cout<<s-r<<" ";

        if(r%(n-1)==0)
        {
            for(int i=0; i<n-1; i++)
                cout<<r/(n-1)<<" ";
        }
        else
        {
            int temp = r%(n-1);
            for(int i=0; i<n-1; i++)
                arr[i]=r/(n-1);

            for(int i=0; i<temp; i++)
                arr[i]+=1;

            for(int i=0; i<n-1; i++)
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
