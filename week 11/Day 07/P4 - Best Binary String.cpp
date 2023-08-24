//problem link : https://codeforces.com/contest/1837/problem/C

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        char ch = '0';
        for (auto &it : str)
        {
            if (it == '?')
                it = ch;
            ch = it;
        }
        cout << str << '\n';
    }
    return 0;
}
