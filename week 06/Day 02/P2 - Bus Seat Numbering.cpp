//problem link : https://www.codechef.com/problems/SEATNUMBER

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
        int n;
        cin>>n;

        if(n<=10)
            cout<<"Lower Double\n";
        else if(n<=15)
            cout<<"Lower Single\n";
        else if(n<=25)
            cout<<"Upper Double\n";
        else
            cout<<"Upper Single\n";
    }

    return 0;
}
