//problem link : https://codeforces.com/contest/1702/problem/C

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
        int n,q;
        cin>>n>>q;
        map<int,int>left,right;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin >> x;
            if(left[x]==0)
                left[x]=i;
            right[x]=i;
        }
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            if(left[a] && right[b] && left[a]<right[b])
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
