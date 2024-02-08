#include <iostream>

using namespace std;

int main()
{
//setting a particular bit 
    int num , position,a  ;
    cin>>num>>position;
    //a=(1<<(position-1));
    //cout<<a<<endl;
    num = num | (1<<(position -1));
    cout<<num<<endl;
//clear a particular bit 

 //   int num , position,a  ;
    cin>>num>>position;
    
//since its using and mask if the bit will change to 0 if either of the bit is 0 
    num = num & (~(1<<(position-1)));  
    
 
    cout<<num<<endl;
}
