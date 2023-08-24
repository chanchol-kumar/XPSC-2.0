//problem link : https://codeforces.com/contest/1841/problem/B

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
        vector<int> arr(n), taken;
        string ans = "";
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (taken.empty())
            {
                ans.push_back('1');
                taken.push_back(arr[i]);
            }
            else
            {
                if (flag)
                {
                    if (arr[i] < taken.back())
                        ans.push_back('0');
                    else
                    {
                        if (arr[i] > taken[0])
                            ans.push_back('0');
                        else
                        {
                            ans.push_back('1');
                            taken.push_back(arr[i]);
                        }
                    }
                }
                else
                {
                    if (arr[i] >= taken.back())
                    {
                        ans.push_back('1');
                        taken.push_back(arr[i]);
                    }
                    else
                    {
                        if (arr[i] > taken[0])
                            ans.push_back('0');
                        else
                        {
                            flag = true;
                            ans.push_back('1');
                            taken.push_back(arr[i]);
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
