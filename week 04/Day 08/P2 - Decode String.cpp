//problem link : https://codeforces.com/contest/1729/problem/B

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
        int n;
        cin>>n;
        string s;
        cin>>s;
 
        string ans;
        for(int i=0; i<n; i++)
        {
            if(i+2<n && s[i+2]=='0' && (i+3>=n || s[i+3]!='0'))
            {
                int num=((s[i]-'0')*10) + (s[i+1]-'0');
                ans.push_back((char)(96+num));
                i+=2;
            }
            else
            {
                int num=((s[i]-'0'));
                ans.push_back((char)(96+num));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
