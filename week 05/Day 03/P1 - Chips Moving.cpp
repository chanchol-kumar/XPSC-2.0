//problem link : https://codeforces.com/contest/1213/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;
    cin>>n;
    int a=0,b=0;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        if(x%2==0) a++;
        else b++;
    }
    cout<<min(a,b)<<endl;
    return 0;
}
