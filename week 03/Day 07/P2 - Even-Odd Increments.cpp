//problem link : https://codeforces.com/contest/1744/problem/B

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        long long evenCnt=0,oddCnt=0,sum=0;
        for(int i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            sum+=temp;

            if(temp%2==0)
                evenCnt++;
            else
                oddCnt++;
        }
        while(q--)
        {
            int type,x;
            cin>>type>>x;
            if(type==1)
            {
                sum+=oddCnt*x;
                if(x&1)
                {
                    evenCnt+=oddCnt;
                    oddCnt=0;
                }
            }
            else
            {
                sum+=(evenCnt*x);
                if(x&1)
                {
                    oddCnt+=evenCnt;
                    evenCnt=0;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
