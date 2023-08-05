//problem link : https://codeforces.com/problemset/problem/1747/B

#include <bits/stdc++.h>
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
        int n;
        cin >> n;
        int firstB = 1, lastA = 3 * n - 1;
        cout << (n + 1) / 2 << endl;
        while (lastA > firstB)
        {
            cout << firstB << " " << lastA << endl;
            firstB += 3;
            lastA -= 3;
        }
    }
    return 0;
}
