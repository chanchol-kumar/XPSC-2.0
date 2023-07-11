//problem link : https://codeforces.com/contest/1324/problem/C

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
        string s;
        cin>>s;
        int mx = 0, l = -1;
        for(int i=0; i<=s.size(); i++)
        {
            if(s[i]=='R'||i==s.size())
            {
                mx = max(mx, i-l);
                l = i;
            }
        }
        cout<<mx<<endl;
    }
 
    return 0;
}
