// problem link : https://codeforces.com/problemset/problem/1104/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<char>v;
    int cnt = 0;
    for (auto i : s)
    {
        if (!v.empty() && v.back() == i)
        {
            cnt++;
            v.pop_back();
        }
        else
            v.push_back(i);
    }
    if (cnt & 1)
        cout << "Yes\n";
    else
        cout << "No\n";
return 0;
}
