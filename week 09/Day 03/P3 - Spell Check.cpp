//problem link : https://codeforces.com/problemset/problem/1722/A

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
        if (n != 5)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(s.begin(), s.end());

        if (s == "Timru")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
