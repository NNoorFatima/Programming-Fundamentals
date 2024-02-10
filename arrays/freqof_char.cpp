
#include <iostream>
using namespace std;
//find frequency of characters in string + length of string 
int main()
{
    string name;
    char ch;
    int i=0;
    cout<<"Enter string: ";
    cin>>name;
    //length of string
    while (name[i]!='\0')
    {   i++; }
    cout<<"Length of string is: "<<i<<endl;
    cout<<"enter the character for which you want frequency: ";
    cin>>ch;
    int count=0;
    int j=0;
    //frequency of ch in strig
    while(j!=i)
    {
        if (name[j]==ch)
            count++;
        j++;
    }
    cout<<"the frequency of "<<ch<<" is "<<count<<endl;
}
