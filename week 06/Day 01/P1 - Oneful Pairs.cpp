//problem link : https://www.codechef.com/problems/ONEFULPAIRS?tab=statement

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int a,b;
    cin>>a>>b;

    if(a+b+(a*b)==111)
        cout<<"Yes\n";
    else
        cout<<"No\n";

    return 0;
}
