
#include <iostream>
using namespace std;


int main()
{
    int num[]={1,2,3,4,5,6};
    int k;
    const int size= sizeof(num)/sizeof(num[0]);
    k=size-1;
    //reversing array
    for(int i=0 ;i<size/2 ;i++,k--)
    {
        int temp= num[i];
        num[i]=num[k];
        num[k]=temp;
        
    }
    
    
    for(int i=0 ;i<size ;i++)
        std::cout <<num[i] << std::endl;
}
