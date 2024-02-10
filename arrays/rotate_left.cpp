
#include <iostream>
using namespace std;

int main()
{
//rotating array left 
    int num[]={1,2,3,4,5,6,7,8,9,10};
    const int size= sizeof(num)/sizeof(num[0]);
    int d=0;
    cout<<"Enter by how many digits u want to rotate array"<<endl;
    cin>>d;
    for (int i=0 ; i<d ; i++)
    {
        int  temp=num[0];
        for (int j=0 ; j<size ; j++)
        {
            num[j]=num[j+1];
            if (j==(size-1))
            num[j] = temp;
        }
    }
    cout<<endl;
    for (int k=0 ; k<size ; k++)
    cout<<num[k]<<" ";
    
    return 0;
}

