
#include <iostream>
using namespace std;
//plaindrome number 
bool plaindrome(string str,int l);
int length(string num);
int main()
{
    string num;
    cout<<"enter number: ";
    cin>>num;
    int len=length(num);
    if(plaindrome(num,len)==0)
        cout<<"not palindrome\n";
    else 
        cout<<"yes palindrome\n";
  
}
bool plaindrome(string str,int l)
{
    static int i=0;
    if(i==(l/2))        //str[i]=='\0'
        return 1;
    else if (str[i]==str[l-i-1]) 
    {
        i++;
        return plaindrome(str,l);  
    }
    return 0;
}
int length(string num)
{
    static int k=0;
    while(num[k]!='\0')
    {   k++;    }
    return k;
}
