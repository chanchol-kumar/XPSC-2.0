//problem link : https://codeforces.com/contest/1582/problem/B

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
        int n, x, zero = 0, one = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 0)
                zero++;
            if (x == 1)
                one++;
        }
        cout << (1LL << zero) * (ll)one << endl;
    }
    return 0;
}
