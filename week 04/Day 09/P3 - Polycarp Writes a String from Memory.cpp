//problem link : https://codeforces.com/contest/1702/problem/B

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
        set<char>st;
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            st.insert(s[i]);
            if(st.size()==4)
            {
                cnt++;
                i--;
                st.clear();
            }
        }
        if(st.empty()) cout<<cnt<<endl;
        else cout<<cnt+1<<endl;
    }
    return 0;
}
