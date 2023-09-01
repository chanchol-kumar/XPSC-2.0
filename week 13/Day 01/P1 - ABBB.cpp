// Problem link : https://codeforces.com/problemset/problem/1428/C

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
                continue;
            }
            if (s[i] == 'B' && (st.top() == 'A' || st.top() == 'B'))
                st.pop();
            else
                st.push(s[i]);
        }
        cout << st.size() << endl;
    }
    return 0;
}
 
