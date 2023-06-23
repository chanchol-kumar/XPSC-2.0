//problem link : https://www.codechef.com/problems/PALIXOR

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n>>b;
        vector<int>arr(n);

        int res = -1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if((arr[i]&b)==b)
                res&=arr[i];
        }
        if(res==b)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;

}




