//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    string s;
    getline(cin, s);
 
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T')
        {
            i+=4;
            cout<<" ";
            continue;
        }
        else
            cout<<s[i];
    }
    cout << endl;
 
    return 0;
}
