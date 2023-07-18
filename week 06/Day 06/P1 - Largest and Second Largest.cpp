//problem link : https://www.codechef.com/problems/LARGESECOND

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
        sort(arr,arr+n,greater<int>());
        for(int i=1; i<n; i++)
        {
            if(arr[i] != arr[i-1])
            {
                cout<<arr[i] +arr[i-1]<<endl;
                break;
            }
        }
    }
    return 0;
}
