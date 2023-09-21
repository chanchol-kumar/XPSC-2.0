//problem link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int x;
    cin >> x;
    while (x--)
    {
        int l, r;
        cin >> l >> r;
        auto it1 = lower_bound(arr.begin(), arr.end(), l);
        auto it2 = upper_bound(arr.begin(), arr.end(), r);
        cout << it2 - it1 << " ";
    }
    cout << "\n";
    return 0;
}
