#include <iostream>

using namespace std;

int main()
{

//checks if an integer is power of 2
    int data;
    int flag;
    
    cout<<"Enter the number ";
    cin>>data; //Get the number
    
    flag = ((data != 0) && !(data & (data - 1))); // check the power of 2   ==>(true) && (32) as 32 is not = to 0 it is considered as true the and of two true statements is TRUE 
    						//therefore flag stores the value of 1
    if(flag == 1)
        printf("Number is a power of 2 \n");  
    else
        printf("Enter number is not power of 2 \n");

}
