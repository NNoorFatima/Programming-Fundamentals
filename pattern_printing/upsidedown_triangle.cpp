
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
  //reverse pattern printing 
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            if(col<row)
            {
                cout<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }

}
