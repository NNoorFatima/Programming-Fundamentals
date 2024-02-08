
#include <iostream>
using namespace std;
//Write a program in C to check a number is a prime number or not using recursion.
bool prime(int num)
{
    static int i=num;
    if (i==1)
       return 1;
    else if(num%2==0)
        return 0;
    else
    {   i--; 
        return prime(num);    }
}
int main()
{
    int n;
    cout<<"enter the number you want:";
    cin>>n;
    if(prime(n)==1)
        cout<<"Number is prime\n";
    else
        cout<<"Number is not prime\n";
}
