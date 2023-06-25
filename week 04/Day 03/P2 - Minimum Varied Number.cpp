//problem link : https://codeforces.com/contest/1714/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define endl '\n'
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
        string str;
        for(int j=9;j>=1;j--)
        {
            if(n>=j)
            {
                str +=(char)('0'+j);
                n-=j;
            }
        }
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}
