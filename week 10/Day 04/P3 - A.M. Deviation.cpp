//problem link : https://codeforces.com/contest/1605/problem/A

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
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b - c * 2) % 3 == 0)
            cout << "0\n";
        else
            cout << "1\n";
    }
    return 0;
}
