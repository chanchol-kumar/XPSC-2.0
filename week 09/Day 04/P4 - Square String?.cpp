//problem link : https://codeforces.com/problemset/problem/1619/A

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
        string s;
        cin>>s;
        int n=s.size();
        if(n%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(s.substr(0, n/2) == s.substr(n/2, n/2))
                {cout<<"YES"<<endl;}
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
