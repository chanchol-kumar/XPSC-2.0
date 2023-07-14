//problem link : https://www.codechef.com/problems/DOTIFYPLAY

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
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>arr;
        for(int i=1; i<=a; i++)
        {
            int n,x;
            cin>>n>>x;
            if(x==c)
                arr.push_back(n);
        }
        int ans = 0;
        sort(arr.begin(),arr.end());
        if(arr.size()==0 || b>arr.size())
            cout<<-1<<endl;
        else
        {
            int i=arr.size()-1;
            while(b--)
                ans+=arr[i--];
            cout<<ans<<endl;
        }
    }

    return 0;
}
