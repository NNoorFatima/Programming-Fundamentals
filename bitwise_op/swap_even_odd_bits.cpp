#include <iostream>

using namespace std;

int main()
{
//swap all even odd bits
    const int even=170;
    const int odd=85;
    int num,even_b,odd_b,new_num;
    cin>>num;
    even_b=num & even;
    //cout<<even_b<<endl;
    odd_b= num & odd;
    //cout<<odd_b<<endl;
    
    odd_b= odd_b<<1;
    //cout<<odd_b<<endl;
    even_b= even_b>>1;
    //cout<<even_b<<endl;
    new_num= even_b | odd_b;
    cout<<new_num;
}
