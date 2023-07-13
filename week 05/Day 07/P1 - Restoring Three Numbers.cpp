//problem link : https://codeforces.com/contest/1154/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    vector<int>a(4);
    for(int i=0;i<4;i++)
        cin >>a[i];
    sort(a.begin(),a.end());
    cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2]<<endl;

    return 0;
}
