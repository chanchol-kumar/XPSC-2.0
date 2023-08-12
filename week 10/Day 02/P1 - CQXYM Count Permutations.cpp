//problem link : https://codeforces.com/contest/1581/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll fact = 1;
        for (int i = 3; i <= 2 * n; i++)
        {
            fact *= i;
            fact %= MOD;
        }
        cout << fact << endl;
    }
    return 0;
}
