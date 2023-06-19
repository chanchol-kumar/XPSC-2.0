//problem link : https://codeforces.com/contest/1800/problem/D

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
        int n;
        cin>>n;
        string str1,str2;
        cin>>str1;

        for(int i=2; i<n; i++)
        {
            str2.push_back(str1[i]);
        }

        int i=0,j=0;
        long long ans=1;
        while(i<n-2)
        {
            if(str1[i]!=str2[j])
                ans++;
            i++,j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
