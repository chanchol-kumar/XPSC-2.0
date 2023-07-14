//problem link : https://www.codechef.com/problems/WATERFILLING

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
        int a,b,c,cnt=0;
        cin>>a>>b>>c;
        if(a==1)cnt++;
        if(b==1)cnt++;
        if(c==1)cnt++;
        
        if(cnt<=1)
            cout<<"Water filling time\n";
        else
            cout<<"Not now\n";        
    }

    return 0;
}
