// problem link : https://www.codechef.com/problems/PALIXOR

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int>palindromes;

void isPalindromes()
{
    int mx = 1<<15;
    for(int i=0; i<mx; i++)
    {
        string str = to_string(i);
        string rev = str;
        reverse(str.begin(),str.end());
        if(str==rev)
            palindromes.push_back(i);
    }
}

int main()
{
    optimize();
    isPalindromes();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        unordered_map<int,int>mp;

        ll ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<palindromes.size(); j++)
            {
                if((arr[i]^palindromes[j])<=arr[i]) continue;
                if(mp.find(arr[i]^palindromes[j]) != mp.end())
                    ans += mp[arr[i]^palindromes[j]];
            }
        }
        for(auto it : mp)
            ans += (ll)it.second * (it.second + 1) / 2;
        cout<<ans<<endl;
    }
    return 0;
}

