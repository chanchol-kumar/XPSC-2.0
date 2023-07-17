//problem link : https://www.codechef.com/problems/FOODPLAN 

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
        int n,x;
        cin>>n>>x;
        
        if(n*90<x*100)
            cout<<"ONLINE\n";
        else if(n*90>x*100)
            cout<<"DINING\n";
        else
            cout<<"EITHER\n";
    }
    return 0;
}
