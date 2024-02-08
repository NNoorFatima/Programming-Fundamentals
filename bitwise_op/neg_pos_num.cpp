#include <iostream>

using namespace std;

int main()
{
//checking if a number is negative or positive 
    int a;
    int sign;
    const int mask=-128;
   
    cin>>a;
    sign=mask & a;
    if (sign==0)
    cout<<"number is positive";
    else
    cout<<"Numberis negative";
  return 0;
}
