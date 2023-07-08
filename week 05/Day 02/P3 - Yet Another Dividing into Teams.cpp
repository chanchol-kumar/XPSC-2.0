//problem link : https://codeforces.com/contest/1249/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=1;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
 
        for(int i=0; i<n-1; i++)
        {
            if (abs(a[i] - a[i + 1]) == 1)
            {
                cnt++;
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
