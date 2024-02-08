
#include <iostream>
using namespace std;
//find the number of digits in a number 
int number_digits(int num);
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
   cout<< number_digits(n);    
}
int number_digits(int num)
{
    static int count=0;
    if (num==0)
    {  //count ++;
        return count;}
    else
    {   count++;
        num = num/10;
        return number_digits(num);
    }
}
