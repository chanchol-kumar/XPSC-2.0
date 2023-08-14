//problem link : https://codeforces.com/contest/1605/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (is_sorted(s.begin(), s.end()))
        {
            cout << 0 << "\n";
            continue;
        }
        string str = s;
        sort(str.begin(), str.end());
        cout << 1 << "\n";

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != str[i])
                arr.push_back(i + 1);
        }
        cout << arr.size() << " ";
        for (int i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
