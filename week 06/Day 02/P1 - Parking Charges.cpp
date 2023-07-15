//problem link : https://www.codechef.com/problems/PARKINGCHARG

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int a,b,c;
    cin>>a>>b>>c;

    cout<<a+b*(c-1)<<endl;
    return 0;
}
