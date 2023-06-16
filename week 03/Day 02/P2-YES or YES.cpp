//problem link : https://codeforces.com/contest/1703/problem/A

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
        string s;
        cin>>s;

        if((s[0]=='Y'||s[0]=='y')&&(s[1]=='E'||s[1]=='e')&&(s[2]=='s'||s[2]=='S'))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
