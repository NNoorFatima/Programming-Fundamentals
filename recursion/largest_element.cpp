
#include <iostream>
using namespace std;
//find largest element in array using recursion 
void largest_element(int num[],int pos, int& max, int size);
int main()
{
  int num []={1,2,3,4,65,6,7,8,9};
  int size = sizeof(num)/sizeof(num[0]);
  int max=num[0];
  int pos=1;
  largest_element(num,pos,max,size);
}
void largest_element(int num[],int pos, int& max, int size)
{
    if (pos==size)
        cout<<"largest element is "<<max<<endl;
    else if (num[pos]>max)
    {   max=num[pos];   
        largest_element(num,pos+1,max,size);
    }
    else if (num[pos]<max)
    {   
        largest_element(num,pos+1,max,size);
    }
}
