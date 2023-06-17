//problem link : https://codeforces.com/contest/1692/problem/B

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
        set<int>s;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);
        }

        if((n-s.size())%2==0)
        {
            cout<<s.size()<<endl;
        }
        else
            cout<<s.size()-1<<endl;
    }
    return 0;
}
