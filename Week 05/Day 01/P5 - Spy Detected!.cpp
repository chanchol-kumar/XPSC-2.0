//problem link : https://codeforces.com/contest/1512/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n, ans = 0, res;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        if (b[0] != b[1])
            ans = b[0];
        else
            ans = b[n - 1];

        for (int i = 0; i < n; i++)
        {
            if (a[i] == ans)
            {
                res = i + 1;
                break;
            }
        }
        cout << res << endl;
    }

    return 0;
}
