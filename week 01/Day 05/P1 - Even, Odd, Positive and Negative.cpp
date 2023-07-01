//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos=0,neg=0,even=0,odd=0;
    cin>>n;

    int arr[n+1];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>0) pos++;
        if(arr[i]<0) neg++;
        if(arr[i]%2==0) even++;
        else  odd++;
    }
    
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;

    return 0;
}
