
#include <iostream>

using namespace std;

int main()
{
  int position,number;
  cin>>number>>position;
  number = number & (255<<(position));
  cout<<number<<endl;

return 0;
}
