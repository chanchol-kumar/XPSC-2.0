//problem link : https://www.codechef.com/problems/DDMMORMMDD

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
        string s;
        cin>>s;
        int a = (int)(s[0] -48);
        int b = (int )s[1] -48;
        int c = (int)(s[3] -48);
        int d = (int)(s[4] -48);
        int ans = 10*a+b;
        int ans1 = 10*c+d;

        if(ans>12)
            cout<< "DD/MM/YYYY\n";
        else
        {
            if(ans1>12)
                cout <<"MM/DD/YYYY\n";
            else
                cout<< "BOTH\n";
        }
    }
    return 0;
}
