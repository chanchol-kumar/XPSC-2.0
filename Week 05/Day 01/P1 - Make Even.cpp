//problem 01 : https://codeforces.com/contest/1611/problem/A

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
        int n=s.size();
 
 
        if((s[n-1]-'0')%2==0)
            cout<<0<<endl;
        else if((s[0]-'0')%2==0)
            cout<<1<<endl;
        else
        {
            int even=0,odd=0;
            for(int i=0; i<n; i++)
            {
                if((s[i]-'0')%2==0) even++;
                else odd++;
            }
            if(even>0)cout<<2<<endl;
            else cout<<-1<<endl;
        }
 
    }
 
    return 0;
}
