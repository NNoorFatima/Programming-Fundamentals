#include <iostream>

using namespace std;

int main()
{

//checking if two numbers have same sign or different
 int a,b;
    int sign;
   
    cin>>a>>b;
    sign= a ^ b;
    if (sign<1)
    cout<<"they have different signs";
    else
    cout<<"they have same signs";

}
