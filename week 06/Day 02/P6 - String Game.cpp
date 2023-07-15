//problem link : https://www.codechef.com/problems/STRAME

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
        ll n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                cnt++;
        }
        if(min(cnt,n-cnt)%2)
            cout<<"Zlatan\n";
        else
            cout<<"Ramos\n";
    }
    return 0;
}
