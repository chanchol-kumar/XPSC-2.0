//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    int n;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    int min_val = *min_element(arr, arr+n);
    int freq = count(arr, arr+n, min_val);
 
    if (freq % 2 == 1)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;
 
    return 0;
}
