//problem link : https://codeforces.com/contest/1807/problem/C

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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mp[26];
        for (int i = 0; i < 26; i++)
            mp[i] = -1;

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int curr = (s[i] - 'a');
            if (mp[curr] == -1)
                mp[curr] = (i % 2);

            else
            {
                if (mp[curr] != i % 2)
                {
                    cout << "NO\n";
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
    }
    return 0;
}
