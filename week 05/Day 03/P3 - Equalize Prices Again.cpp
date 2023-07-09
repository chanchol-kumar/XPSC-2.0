//problem link : https://codeforces.com/contest/1234/problem/A

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
        int n,sum=0;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%n==0)
            cout<<sum/n<<endl;
        else
            cout<<(sum/n)+1<<endl;
    }
    return 0;
}
