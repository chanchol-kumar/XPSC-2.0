//problem link : https://codeforces.com/problemset/problem/1770/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
  optimize();
  int t;
  cin >> t;
  while (t--)
  {
      int n, m;
      cin >> n >> m;
      ll sum = 0;
      priority_queue<int, vector<int>, greater<int>> pq;
      for (int i = 0; i < n; i++)
      {
          int temp;
          cin >> temp;
          pq.push(temp);
      }
      for (int i = 0; i < m; i++)
      {
          int temp;
          cin >> temp;
          pq.pop();
          pq.push(temp);
      }
      while (!pq.empty())
      {
          sum += pq.top();
          pq.pop();
      }
      cout << sum << endl;
  }
  return 0;
}
