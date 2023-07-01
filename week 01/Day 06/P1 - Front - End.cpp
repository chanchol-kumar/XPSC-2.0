//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F

#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
 
    int i = 0, j = n - 1;
    while(i < j)
    {
        if(i == j)
            cout << arr[i] << " ";
        else
        {
            cout << arr[i] << " ";
            cout << arr[j] << " ";
            i++,j--;
        }
    }
    if(n%2==1)
        cout<<arr[n/2]<<endl;
 
    return 0;
}
