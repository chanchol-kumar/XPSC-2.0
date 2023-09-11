//problem link : https://codeforces.com/contest/1869/problem/A

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
        ll n;
        cin >> n;
        vector<int> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        if (n % 2 == 0)
        {
            cout << 2 << "\n";
            cout << "1 " << n << "\n";
            cout << "1 " << n << "\n";
        }
        else
        {
            cout << 4 << endl;
            cout << "1 " << n - 1 << "\n";
            cout << "1 " << n - 1 << "\n";
            cout << 2 << " " << n << "\n";
            cout << 2 << " " << n << "\n";
        }
    }
    return 0;
}
