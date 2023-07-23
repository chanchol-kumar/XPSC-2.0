//problem link  : https://www.codechef.com/problems/CUTOFF

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
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        cout<<arr[n-x]-1<<endl;
    }
    return 0;
}
