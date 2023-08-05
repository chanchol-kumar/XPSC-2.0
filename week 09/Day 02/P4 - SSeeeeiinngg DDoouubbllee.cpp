//problem link : https://codeforces.com/problemset/problem/1758/A

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
        string s,str;
        cin>>s;
        str=s;
        reverse(str.begin(),str.end());
        s+=str;
        cout<<s<<endl;
    }
    return 0;
}
