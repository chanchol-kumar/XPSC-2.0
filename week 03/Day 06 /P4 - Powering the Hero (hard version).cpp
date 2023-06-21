//problem link : https://codeforces.com/contest/1800/problem/C2

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';
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
        vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];

        long long ans=0;
        priority_queue<long long> pq;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                if(pq.empty())continue;
                ans+=pq.top();
                pq.pop();
            }
            else
                pq.push(arr[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
