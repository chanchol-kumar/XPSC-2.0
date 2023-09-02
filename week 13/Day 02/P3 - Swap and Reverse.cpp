// problem link : https://codeforces.com/contest/1864/problem/B

// problem link : https://codeforces.com/contest/1864/problem/B

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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool flag = false;
        if (k % 2 == 0 && !flag)
        {
            sort(s.begin(), s.end());
            cout << s << "\n";
            flag = true;
        }
        else
        {
            string even = "", odd = "";
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    even += s[i];
                else
                    odd += s[i];
            }
            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());
            for (int i = n - 1; i >= 0; i--)
            {
                if (i % 2 == 0)
                {
                    s[i] = even.back();
                    even.pop_back();
                }
                else
                {
                    s[i] = odd.back();
                    odd.pop_back();
                }
            }
            cout << s << "\n";
        }
    }
    return 0;
}
