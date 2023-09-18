//problem link : https://cses.fi/problemset/task/1073

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    multiset<int> top;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto it = top.upper_bound(x);
        if (it != top.end())
        {
            top.erase(it);
            top.insert(x);
        }
        else
            top.insert(x);
    }
    cout << top.size() << "\n";
    return 0;
}
