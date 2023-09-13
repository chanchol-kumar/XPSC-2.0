//problem link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, x;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (auto it : v)
        cout << it << " ";
    cout << "\n";
    
    return 0;
}
