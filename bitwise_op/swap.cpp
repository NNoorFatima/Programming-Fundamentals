#include <iostream>

using namespace std;

int main()
{
 // swap two variables without using temporary variable 

	int a,b;
	cin>>a>>b;
	a= a^ b;
	b= a^b;
	a=a^b;

	cout<<a<<endl<<b<<endl;
  return 0;
}
