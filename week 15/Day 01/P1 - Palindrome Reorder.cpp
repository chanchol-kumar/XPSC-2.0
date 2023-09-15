//problem link  : https://cses.fi/problemset/task/1755/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> a(26);
    for (char c : s)
        a[c - 'A']++;

    int cnt = 0;
    for (int i = 0; i < 26; i++)
        cnt += (a[i] % 2);
    if (cnt > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    string ans;
    for (int i = 0; i < 26; i++)
    {
        if ((a[i] % 2 == 0))
        {
            for (int j = 0; j < a[i] / 2; j++)
                ans.push_back(i + 'A');
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 != 0)
        {
            for (int j = 0; j < a[i]; j++)
                ans.push_back(i + 'A');
        }
    }
    for (int i = 25; i >= 0; i--)
    {
        if (a[i] % 2 == 0)
        {
            for (int j = 0; j < a[i] / 2; j++)
                ans.push_back(i + 'A');
        }
    }
    cout << ans << endl;
    return 0;
}
