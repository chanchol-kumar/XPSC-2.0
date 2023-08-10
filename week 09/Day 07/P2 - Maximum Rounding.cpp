//problem link : https://codeforces.com/contest/1857/problem/B

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
        bool flag = false;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= '5')
            {
                flag = true;
                int pos = i;
                while (pos)
                {
                    s[pos - 1]++;
                    if (s[pos - 1] < '5')
                        break;
                    pos--;
                }
                if (pos == 0)
                {
                    cout << '1';
                    for (int i = 0; i < s.size(); ++i)
                        cout << '0';
                    cout << '\n';
                    break;
                }
                else
                {
                    for (int i = pos; i < s.size(); ++i)
                        s[i] = '0';
                    cout << s << '\n';
                    break;
                }
            }
        }
        if (!flag)
            cout << s << '\n';
    }
    return 0;
}
