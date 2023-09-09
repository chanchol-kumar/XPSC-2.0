//problem link : https://codeforces.com/contest/1872/problem/D

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
        ll n, a, b, x, y, z, suma, sumb;
        cin >> n >> a >> b;
        z = (a * b)/__gcd(a, b);
        z = n / z;
        x = n / a - z;
        y = n / b - z;
        suma = ((n + n - x + 1) * x) / 2;
        sumb = (y * (y + 1)) / 2;
        sumb = suma - sumb;
        cout << sumb << endl;
    }
    return 0;
}
