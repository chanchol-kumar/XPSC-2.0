//problem link : https://codeforces.com/contest/1790/problem/A

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main()
{
    optimize()

    int t;
    cin>>t;

    while(t--)
    {
        int count=0;
        string PI ="314159265358979323846264338327";
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
            if(PI[i]==s[i])
                count++;
            else
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}
