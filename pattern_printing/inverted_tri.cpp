
#include <iostream>
using namespace std;
int main()
{
//pattern printing
    int n;
    cin>>n;
    for (int row=1;row<=n;row++)
    {
        for (int col=4;col>=row;col--)						//####
        {										                     //  ###		
            cout<<"*";								          //    ##
        }										                   //      #
        cout<<endl;
        for(int space=1;space<=row;space++)
        {
            cout<<" ";
        }
    }


}
