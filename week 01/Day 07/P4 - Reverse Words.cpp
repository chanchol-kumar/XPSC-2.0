//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    string s, str;
    getline(cin, s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            cout<<" ";
            continue; 
        }
 
        while(i<s.size() && s[i]!=' ')
        {
            str.push_back(s[i]);
            i++;
        }
        i--; 
        reverse(str.begin(), str.end());
        cout << str;
        str.clear(); 
    }
    cout << endl;
    
    return 0;
}
