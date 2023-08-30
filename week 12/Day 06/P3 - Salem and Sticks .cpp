//problem link : https://codeforces.com/problemset/problem/1105/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mx =arr[0], mn = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
        if (arr[i] < mn)
            mn = arr[i];
    }
    int sum = 9999999;
    int x = 0;
    for (int i = mn; i <= mx; i++)
    {

        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < i)
                temp += i - arr[j] - 1;
            else if (arr[j] > i)
                temp += arr[j] - i - 1;
            else if (arr[j] == i)
                temp += 0;
        }
        if (temp < sum)
        {
            sum = temp;
            x = i;
        }
    }
    cout << x << " " << sum;
    return 0;
}
