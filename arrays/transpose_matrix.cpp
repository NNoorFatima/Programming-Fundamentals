
#include <iostream>
using namespace std;
//tranposing a matrix
int main()
{
    int r=4 , c=2;
    int num[r][c]={{1,2},{3,4},{5,6},{7,8}}; 
    int transpose[c][r];
   //displaying before tranpose
    for (int i=0 ; i<r; i++)
    {   for (int j=0 ; j<c ; j++)
            cout<<num[i][j]<<" ";
        cout<<endl;}
   //transposing 
    for (int i=0 ; i<r ; i++)
        for (int j=0 ; j<c ; j++)
            transpose[j][i]=num[i][j];
    cout<<endl;
   //displaying after transposing
   for (int i=0 ; i<c; i++)
    {   for (int j=0 ; j<r ; j++)
            cout<<transpose[i][j]<<" ";
        cout<<endl;}
}

