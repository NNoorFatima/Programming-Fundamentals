
#include <iostream>
using namespace std;
//Write a program to print all the LEADERS in the array. 
//An element is a leader if it is greater than all the elements to its right side.
//And the rightmost element is always a leader.
int main ()
{
    int num[]={1, 2, 3, 4, 5, 2};
    int size = sizeof(num)/sizeof(num[0]);
    bool check=1;
    int n=0;

    for (int i=0 ; i< size ; i++)
    {   check =1;
       for (int j=i+1 ; j<size ; j++)
       {
            if (num[i]<num[j])
            {   check =0 ;
                break;      }
       }
        if (check==1)
            cout<<num[i]<<" ";        
    }
}
