#include <iostream>

using namespace std;

int main()
{
  //toggling or inverting a particular bit position of a given number 
   	int x,pos,a;
   	cin>>x;
  	 cin>>pos;
  	 //a= (1<<(pos-1)); 
   	//cout<<a<<endl;
   	x =x ^ (1<<(pos-1));
  	 cout<<x<<endl<<setbase(2)<<x<<endl;

}
