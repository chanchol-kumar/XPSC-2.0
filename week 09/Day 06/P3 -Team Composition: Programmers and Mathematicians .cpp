//problem link : https://codeforces.com/problemset/problem/1611/B

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
        ll a, b;
        cin >> a >> b;
        cout << min(min(a, b), (a + b) / 4) << endl;
    }
    return 0;
}
