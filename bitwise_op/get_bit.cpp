#include <iostream>

using namespace std;

int main()
{
//getting a particular bit of a number 
    int num,pos;
    cin>>num>>pos;
    
    num= num & (1<<(pos -1));
    cout<<num;

}
