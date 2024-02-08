#include <iostream>

using namespace std;

int main()
{
    
//clear all bits from MSB till given position 

int a,b,c,num,position;
    
    cin>>num>>position;
    //considering its 8 bit 
    a=8-(position-1);
    cout<<a<<endl;
    b=128>>(a);
    if (b>1)
        c=b-1;
        b= c | b;
    num=num & b;
    
    cout<<num<<endl;
  return 0;
}
