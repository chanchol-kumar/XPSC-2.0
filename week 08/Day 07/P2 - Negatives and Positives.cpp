//problem link : https://codeforces.com/contest/1791/problem/E

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
        int n;
        cin >> n;
        vector<ll> arr(n);
        ll neg = 0, ans = 0, mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
                neg++;
 
            ans += abs(arr[i]);
            mn = min(mn, abs(arr[i]));
        }
        if (neg % 2 == 1)
            ans -= (2LL * mn);
 
        cout << ans << endl;
    }
 
    return 0;
}
