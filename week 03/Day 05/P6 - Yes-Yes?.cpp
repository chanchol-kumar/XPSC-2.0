//problem link : https://codeforces.com/contest/1759/problem/A

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string str,sub;
        cin>>str;
        int n=str.size();
        for(int i=1;i<=100;i++)
            sub+="Yes";

        int flag=0,m=sub.size();
        for(int i=0;i<m; i++)
        {
            if(i+n-1<m && sub.substr(i,n)==str)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
