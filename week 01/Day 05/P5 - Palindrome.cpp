//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include<bits/stdc++.h>
using namespace std;
 
int reverse(int num)
{
    int rem = 0;
    while (num > 0)
    {
        rem = rem * 10 + num % 10;
        num /= 10;
    }
    return rem;
}
 
int main()
{
    int n;
    cin>>n;
 
    if(n == reverse(n))
        cout << n << "\nYES\n";
    else
        cout << reverse(n) << "\nNO\n";
 
    return 0;
}
