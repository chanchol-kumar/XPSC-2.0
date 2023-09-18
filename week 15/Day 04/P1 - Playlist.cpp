//problem link : https://cses.fi/problemset/task/1141

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    map<int, bool> mp;
    int mx = 0, curr = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
        if (mp.find(k) == mp.end() || mp[k] == false)
        {
            mp[k] = true;
            curr++;
            mx = max(curr, mx);
        }
        else
        {
            while (v[j] != k)
            {
                mp[v[j]] = false;
                j++;
            }
            curr = (i - j);
            j++;
        }
    }
    cout << mx << "\n";
}
