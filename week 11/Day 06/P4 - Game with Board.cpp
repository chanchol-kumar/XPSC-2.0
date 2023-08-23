//problem link : https://codeforces.com/contest/1841/problem/A

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
        int n;
        cin >> n;
        if (n >= 5)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
    return 0;
}
