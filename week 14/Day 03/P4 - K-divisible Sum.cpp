// problem link : https://codeforces.com/problemset/problem/1476/A

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
        ll n, k;
        cin >> n >> k;
        k *= (n + k - 1) / k;
        cout << (k + n - 1) / n << endl;
    }
    return 0;
}
