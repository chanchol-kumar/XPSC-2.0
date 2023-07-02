//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    int row,col,x;
    cin>>row>>col;
    int mat[row][col];
 
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>mat[i][j];
        }
    }
 
    cin>>x;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(mat[i][j]==x)
            {
                cout<<"will not take number"<<endl;
                return 0;
            }
        }
    }
    cout<<"will take number"<<endl;
 
    return 0;
}
