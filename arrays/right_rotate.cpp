#include <iostream>
using namespace std;
//right rotate an array by d digits  
int main ()
{
    int d=3;
    int temp=0;
    int num[]={1,2 ,3 ,4 ,5 ,6, 7, 8, 9, 10};
    int size = sizeof(num)/sizeof(num[0]);
    
    for (int i=0 ; i<d ; i++)        //6,1,2,3,4,5
    {
        temp= num[size-1];           //
        for (int k=size-1 ; k >=0 ; k--)
        {
            num[k]=num[k-1];
        }
        num[0]=temp;
    }
    for (int i=0 ; i<size ; i++)
    cout<<num[i]<<" ";
    return 0;
}
