//problem link : https://atcoder.jp/contests/abc121/tasks/abc121_d?lang=en

#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

long long XOR(long long n)
{
    if(n%4==0) return n;
    else if(n%4==1) return 1;
    else if(n%4==2) return n+1;
    else return 0;
}

int main()
{
    optimize()
    long long a,b;
    cin>>a>>b;
    if(a==0){
        cout<<XOR(b)<<endl;
    }else
        cout<<(XOR(b) ^ XOR(a-1))<<endl;

    return 0;
}
