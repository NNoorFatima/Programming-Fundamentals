#include <iostream>

using namespace std;

int main()
{

    //rotate bits
    short int num,a,b,position;
    cin>>num>>position;
    a=num<<position;
    b=num>>((16-position));
    num=a | b;
    cout<<num;
      

    return 0;
}
