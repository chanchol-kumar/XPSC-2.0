//problem link : https://www.codechef.com/problems/PRIMEFACT

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
        if(b%2==1)
            b++;
        if(a%2==0)
            cout<<(b-a)/2<<endl;
        else if(a==9)
            cout<<(b-(a+3))/2 + 1<<endl;
        else
            cout<<(b-(2*a))/2 + 1<<endl;
    }
    return 0;
}
