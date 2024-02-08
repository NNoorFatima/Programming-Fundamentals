
#include <iostream>
using namespace std;
int main()
{
//pattern printing 
    int n;
    cin>>n;
    for(int col=n;col>0;col--)                  //****
    {                                           //***
        for(int row=1;row<col;row++)            //**
        {                                       //*
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
