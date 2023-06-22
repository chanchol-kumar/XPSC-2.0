//problem link : https://codeforces.com/contest/1833/problem/A

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

        set<string>st;
        for(int i=0;i<n-1;i++)
        {
            string str;
            str.push_back(s[i]);
            str.push_back(s[i+1]);
            st.insert(str);
        }
        cout<<st.size()<<endl;
    }

    return 0;
}

