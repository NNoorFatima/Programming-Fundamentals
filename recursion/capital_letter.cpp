
#include <iostream>
using namespace std;
//finding first capital letter in a string using recursion
void capital_letter(char str[],int pos);
int main()
{
    char str[100];
    cout<<"Enter the string: ";
    cin.getline(str,100);
    int pos=0;
    capital_letter(str,pos);
    return 0;
}
void capital_letter(char str[],int pos)
{
    if (str[pos]=='\0')
        cout<<"reached end of strnig"<<endl;
    else if (str[pos]>=65 && str[pos]<=91)
        cout<<"The first capital letter is "<<str[pos]<<endl;
    else 
        capital_letter(str,pos+1);
}
