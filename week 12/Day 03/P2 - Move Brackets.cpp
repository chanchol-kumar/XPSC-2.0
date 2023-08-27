//problem link : https://codeforces.com/problemset/problem/1374/C

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
        string s;
        cin >> n >> s;

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')' && cnt > 0)
                cnt--;
            if (s[i] == '(')
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
