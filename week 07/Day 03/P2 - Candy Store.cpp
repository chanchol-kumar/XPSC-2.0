//problem link : https://www.codechef.com/problems/CANDYSTORE

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
        int a,b;
        cin>>a>>b;

        if(a<b)
            cout<<a+(b-a)*2<<endl;
        else
            cout<<b<<endl;
    }
    return 0;
}
