//problem link : https://codeforces.com/contest/1703/problem/B

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
        string s;
        cin>>s;
 
        unordered_set<char>x;
        for(char c : s)
            x.insert(c);
 
        cout<<n+x.size()<<endl;
    }
 
    return 0;
}
