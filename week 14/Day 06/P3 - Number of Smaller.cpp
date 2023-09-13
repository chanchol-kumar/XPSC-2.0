//problem link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < x; i++)
    {
        int p;
        cin >> p;
        auto it = lower_bound(arr.begin(), arr.end(), p);
        cout << it - arr.begin() << " ";
    }
    cout << "\n";
    return 0;
}
