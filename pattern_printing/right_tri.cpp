
#include <iostream>
using namespace std;
int main()
{
//pattern printing
    int n;
    cout<<"Enter rows"<<endl;
    cin>>n;
    
    for (int row=1;row<n;row++)
    {
        for(int space=n;space>row;space--)
        {                                                   //   #
            cout<<" ";                                      //  ##
        }                                                   // ###
                                                            //####
        for (int col=0;col<row;col++)
        {
            cout<<"#";
        }
        cout<<endl;
}
}
