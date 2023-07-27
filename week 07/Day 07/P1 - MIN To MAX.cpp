//problem link : https://www.codechef.com/problems/OPMIN

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];

        sort(arr.begin(),arr.end());
        int cnt=0;
        for(int i=1; i<n; i++)
        {
            if(arr[i]!=arr[0])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
