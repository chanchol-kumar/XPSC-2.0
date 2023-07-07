//problem link : https://codeforces.com/contest/1618/problem/A

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
        int arr[7];
        for(int i=0;i<7;i++)
        cin>>arr[i];
 
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[6]-arr[0]-arr[1]<<endl;
    }
    return 0;
}
