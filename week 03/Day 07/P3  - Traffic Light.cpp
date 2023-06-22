//problem link : https://codeforces.com/contest/1744/problem/D

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
        string x,str;
        cin>>x>>str;
        str += str;
        bool flag = false;
        int cnt = 0, res = 0;

        if(x[0]=='g')
        {
            cout<<0<<endl;
            continue;
        }

        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='g')
            {
                res = max(res,cnt);
                flag = false;
            }

            if(str[i] == x[0] && flag == false)
            {
                flag = true;
                cnt = 0;
            }
            if(flag) cnt++;
        }
        cout<<res<<endl;
    }
    return 0;
}

