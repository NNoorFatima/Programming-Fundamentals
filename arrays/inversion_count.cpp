
#include <iostream>
using namespace std;
//Inversion Count for an array indicates – how far (or close) the array is from being sorted.
//If the array is already sorted, then the inversion count is 0, but if the array is sorted in reverse order, the inversion count is the maximum. 
int main ()
{
    int num[] = {1, 20, 6, 4, 5};
    int count=0;
    int size = sizeof(num)/sizeof(num[0]);
    int temp=0;
    for (int i=0 ; i<size ; i++)
    {
        for (int j=0 ; j<size-1-i; j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
                count++;
            }
        }
    }
    cout<<count;
}
