// Problem link : https://codeforces.com/contest/1861/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(s[0] == '1')
            cout << s[0] << "3\n";
        else if (s[0] == '3' || s[0] == '4' || s[0] == '6' || s[0] == '7')
            cout << s[0] << "1\n";
        else if (s[0] == '2' || s[0] == '5' || s[0] == '8')
            cout << s[0] << "3\n";
        else
            cout << "97\n";
    }
    return 0;
}
