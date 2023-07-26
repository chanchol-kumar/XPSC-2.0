//problem link : https://www.codechef.com/problems/BOOKPAGES

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
        int n,cnt=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==1) cnt++;
        }
        if(cnt%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
