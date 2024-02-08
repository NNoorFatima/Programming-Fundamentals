
#include <iostream>
using namespace std;
//pattern printing using recursion and function 
void star(int k);
void star_rec(int k);
void star_col(int i,int j);
int equilibrium_pos(int n[],int s);
int main()
{
    int k=0 ; 
    cout<<"enter the value of rows: ";
    cin>>k;
    cout<<"using function: "<<endl;
    star(k);
    cout<<"using recursion: "<<endl;
    star_rec(k);
}
void star_rec(int k)
{
    static int i=0;
    if (i==k);
    else
    {
        star_col(i,0);
        cout<<endl;
        i++;
        star_rec(k);
    }
}
void star_col(int i,int j)
{
    if (j>i);
    else
    {
        cout<<"*";
        star_col(i,++j);
    }
}

void star(int k)
{
    for (int i=0 ; i<k ; i++)
    {
        for (int j=0 ; j<=i ; j++)
            cout<<"*";
        cout<<endl;
    }
}
