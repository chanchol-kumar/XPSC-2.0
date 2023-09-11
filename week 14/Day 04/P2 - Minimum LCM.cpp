// problem link : https://codeforces.com/problemset/problem/1765/M

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = n / i;
                break;
            }
        }
        cout << a << ' ' << n - a << '\n';
    }
    
    return 0;
}
