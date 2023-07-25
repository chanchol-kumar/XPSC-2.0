//problem link : https://www.codechef.com/problems/EQUALELE

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
        vector<int> v(n+1,0);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            v[arr[i]]++;
        }
        sort(v.begin(),v.end());
        int mx = v[n];
        cout<<n-mx<<endl;
    }
    return 0;
}
