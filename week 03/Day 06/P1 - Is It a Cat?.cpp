//problem : https://codeforces.com/contest/1800/problem/B

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
        string str1,str2;
        cin>>str1;

        string fs="meow";
        for(int i=0; i<n; i++)
        {
            if(str1[i]<=90)
                str1[i]+=32;
        }

        for(int i=0; i<n; i++)
        {
            if(str2.empty() || str2.back()!=str1[i])
                str2.push_back(str1[i]);
        }

        if(str2==fs)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
