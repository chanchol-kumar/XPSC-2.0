//problem link : https://www.codechef.com/problems/ALTTAB

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;
    cin>>n;

    string str[n],ans;
    unordered_map <string,int> mp;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        str[i]=s;
        mp[s]++;
    }

    for(int i=n-1; i>=0; i--)
    {
        if(mp[str[i]] == 0)continue;
        else
        {
            string str2=str[i];

            ans+=str2[str2.size()-2];
            ans+=str2[str2.size()-1];

            if(mp[str[i]]>=2)
                mp[str[i]]=0;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
