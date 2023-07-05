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
        string str;
        cin>>str;
        int n=str.size();
        int lastzero=n-1;

        for(int i=n-1; i>=0; i--)
        {
            if(str[i]=='0')
                lastzero=i;
        }
        int cnt=0;
        for(int i=lastzero; i>=0; i--)
        {
            cnt++;
            if(str[i]=='1')
                break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
