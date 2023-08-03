//problem link : https://codeforces.com/contest/1791/problem/G1

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
        ll x;
        cin >> x;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] += (i + 1);
        }
 
        sort(arr.begin(), arr.end());
        int ans = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + arr[i] > x)
                break;
            sum += arr[i];
            ans++;
        }
        cout << ans << endl;
    }
 
    return 0;
}
