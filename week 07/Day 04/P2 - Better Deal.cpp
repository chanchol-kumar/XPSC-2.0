//problem link : https://www.codechef.com/problems/BETDEAL

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
        
        if(100-a<200-2*b)
            cout<<"FIRST\n";
        else if(100-a>200-2*b)
            cout<<"SECOND\n";
        else
            cout<<"BOTH\n";
    }
    return 0;
}
