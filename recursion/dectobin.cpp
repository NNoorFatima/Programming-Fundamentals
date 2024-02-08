
#include <iostream>
using namespace std;
//decimaltobinary
int decimaltobinary(int decNo)
{
   static long biNo,mod,fctor = 1;

    if(decNo != 0)
    {
         mod = decNo % 2;
         biNo = biNo + mod * fctor;
         fctor = fctor * 10;
        decimaltobinary(decNo / 2);//calling the function convertBinary itself recursively
    }
    return biNo;
    
}
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<"the number in binary is: ";
    cout<<decimaltobinary(num);
    
}
