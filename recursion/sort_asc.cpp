
#include <iostream>
using namespace std;
//sort ascending using recursion 
void sort_asc(int n[],int s);
void sort(int n[],int s);
int main()
{
   int num[]={5,1,11,12,4,3,2,1};
   int size=sizeof(num)/sizeof(num[0]);
   cout<<"the sorted array is: ";
   sort_asc(num,size);
}
void sort_asc(int n[],int s)
{
    static int i=0;
    int temp;
    if(i==s);
    else                    //45321 i=0==>1  //43521 i=1 ==>2
    {
        cout<<endl;
        for (int j=0 ; j<s ; j++)
        cout<<n[j]<<" ";
        i++;
        sort(n,s);
        sort_asc(n,s);
    }
}
void sort(int n[],int s)
{
    static int j=0;
    int temp;
    if(j==s-1)
        j=0;
    else 
    {
        if (n[j]>n[j+1])
        {
            temp=n[j];          
            n[j]=n[j+1];
            n[j+1]=temp;}
        j++;
        sort(n,s);
    }
}
