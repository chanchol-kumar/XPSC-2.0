problem link : https://cses.fi/problemset/task/1622/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string str = s;
    vector<string> v;
    v.push_back(s);
    while (1)
    {
        next_permutation(s.begin(), s.end());
        if (s == str)
            break;
        else
            v.push_back(s);
    }
    cout << v.size() << "\n";
    for (auto it : v)
        cout << it << "\n";
    return 0;
}
