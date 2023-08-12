//problem link : https://codeforces.com/contest/817/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    ll n, k;
    cin >> n >> k;
    bool flag = false;
    ll l = 1, r = n, ans = 0;
    while (l <= r)
    {
        ll mid = l + ((r - l) / 2);
        ll sum = 0, temp = mid;
        while (temp != 0)
        {
            sum += (temp % 10);
            temp /= 10;
        }
        if (mid - sum >= k)
        {
            flag = true;
            r = mid;
            ans = mid;
            if (l == r) break;
        }
        else
            l = mid + 1;
    }
    if (ans == 0)
        cout << 0 << "\n";
    else
        cout << (n - ans) + 1 << "\n";
 
    return 0;
}
