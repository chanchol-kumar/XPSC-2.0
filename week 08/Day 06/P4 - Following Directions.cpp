//problem link : https://codeforces.com/contest/1791/problem/B

#include <bits/stdc++.h>
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

        int x = 0, y = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                y++;
            if (s[i] == 'D')
                y--;
            if (s[i] == 'R')
                x++;
            if (s[i] == 'L')
                x--;

            if (x == 1 && y == 1)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
