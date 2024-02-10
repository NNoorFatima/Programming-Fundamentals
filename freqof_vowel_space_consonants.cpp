
#include <iostream>
using namespace std;
// find vowels, spaces, consonants in string
int main ()
{
    string str;
    int i=0;
    int spaces=0 , vowels=0 , consonants=0;
    
    cout<<"enter string: ";
    getline(cin, str);  //used for string 
//==> for arrays we use cin.getline(arrayname,maximumlength)
// or  cin.getline(arrayname,maximumlength,@) where @ is terminating character
    while (str[i]!='\0')
    {
        if (str[i]==' ')
            spaces++;
        else if (str[i]=='a' || str[i]=='e'||str[i]=='i' || str[i]=='o'||str[i]=='u'
        ||str[i]=='A' || str[i]=='E'||str[i]=='I' || str[i]=='O'||str[i]=='U')
            vowels++;
        else 
            consonants++;
    i++;
    }
    cout<<"The number of vowels in the string are "<<vowels<<" the total spaces in the string are "<<spaces;
    cout<<" the number of consonants in the string are "<<consonants<<endl;
    return 0;
}
