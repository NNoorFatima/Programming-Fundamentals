
#include <iostream>
using namespace std;
// hailstone sequence 
//if number is odd then 3n+1
//if number is even /2
int hailstone_seq(int num);
int main ()
{
   int n;
   cout<<"enter starting of the sequence: ";
   cin>>n;
   cout<<"outputting the hailstone sequence: ";
   cout<<hailstone_seq(n);
   
}
int hailstone_seq(int num)
{
    if (num==1)
    {   return 1;   }
    else if (num%2==0)
    {
        cout<<num<<" ";
        return hailstone_seq(num/2);
    }
    else 
    {   cout<<num<<" ";
        return hailstone_seq((3*num)+1);   }
}
