//problem link : https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if(s.size()==4)
        cout<<s<<endl;

    else if(s.size()==3)
        cout<<"0"<<s<<endl;

    else if(s.size()==2)
        cout<<"00"<<s<<endl;

    else
        cout<<"000"<<s<<endl;

    return 0;
}
