//problem link : https://codeforces.com/contest/1855/problem/B

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
        ll n;
        cin >> n;

        vector<ll> div;
        set<ll> s;

        for (ll i = 1; i * i <= 100000; i++)
        {
            if (n % i == 0)
            {
                s.insert(i);
                if (n / i != i)
                    s.insert(n / i);
            }
        }
        for (auto it : s)
            div.push_back(it);
        sort(div.rbegin(), div.rend());

        ll cnt = 1, ans = 1;
        for (ll i = 1; i < div.size(); i++)
        {
            if (div[i - 1] - div[i] == 1)
                cnt++;
            else
                cnt = 1;
            ans = max(cnt, ans);
        }
        cout << ans << endl;
    }
    return 0;
}
