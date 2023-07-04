//problem link : https://codeforces.com/contest/1675/problem/B

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
            cin>>arr[i];
 
        for(int i=n-2; i>=0; i--)
        {
            while(arr[i]>=arr[i+1] && arr[i]!=0)
            {
                arr[i]/=2;
                cnt++;
            }
            if(arr[i]>=arr[i+1] || (arr[i]==0 && i>0))
            {
                cnt=-1;
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
