//problem link : https://codeforces.com/contest/1772/problem/A

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
        string ch;
        cin>>ch;
        int a = int(ch[0]-48);
        int b = int(ch[2]-48);
        cout<<a+b<<endl;
    }
    return 0;
}
