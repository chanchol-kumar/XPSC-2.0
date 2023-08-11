//problem link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552&fbclid=IwAR3MYo_0XKPMmMVJzL1SzIkOOFGnFiHJbQD2dPF7ZIq8ZkYNit1FME7F2xM

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it1 = lower_bound(arr.begin(), arr.end(), x);
        auto it2 = upper_bound(arr.begin(), arr.end(), x);

        int idx1 = it1 - arr.begin();
        int idx2 = it2 - arr.begin();

        if (idx1 == 0)
            cout << "X ";
        else
            cout << arr[idx1 - 1] << " ";

        if (idx2 == n)
            cout << "X" << endl;
        else
            cout << arr[idx2] << endl;
    }
    return 0;
}

