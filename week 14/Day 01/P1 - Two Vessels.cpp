//problem link : https://codeforces.com/contest/1872/problem/A

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
        int a, b, c;
        cin >> a >> b >> c;
        double x = 1.0*(a + b) / 2;

        cout << ceil((x - min(a, b)) / c)<< endl;
    }
    return 0;
}
