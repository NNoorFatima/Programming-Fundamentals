
#include <iostream>
using namespace std;
//searching for a character using recursion
void search(string st,char ch, int start);
int main() {
    char ch;
    string name;
    cout<<"enter you name: ";
    getline(cin,name);
    cout<<"enter the element you are searching for: ";
    cin>>ch;
    search(name,ch,0);
    return 0;
}
void search(string st,char ch, int start)
{
    if(st[start]=='\0');
    else
    {
        if (st[start]==ch)
            cout<<"character found at position "<<start<<endl;
        else 
            search(st,ch,++start);
    }
}
