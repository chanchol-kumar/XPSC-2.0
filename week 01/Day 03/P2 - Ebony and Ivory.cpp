//problem link : https://codeforces.com/problemset/problem/633/A

#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    long long a,b,c;
    cin>>a>>b>>c;
    for(int i=0; i<=c; i++)
    {
        for(int j=0; j<=c; j++)
        {
            if((a*i+b*j)==c)
            {
                cout<<"Yes\n";
                return 0;
            }
        }
    }
    cout<<"No\n";
    return 0;
}
