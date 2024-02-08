#include <iostream>

using namespace std;

int main()
{
//check if a number is even or odd 
    const int even=1;
    int num,check;
    cin>>num;
    check = num & even;
    if (check==0)
        cout<<"number is even"<<endl;
    else
        cout<<"odd"<<endl;

}
