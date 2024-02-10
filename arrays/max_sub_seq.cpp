
#include <iostream>
using namespace std;
// The task is to find the maximum sum of a subsequence such that no 2 numbers in the sequence should be adjacent in the array.
int main()
{
    int num[]={5, 5, 10, 100, 10, 75,200};
    int size = sizeof (num)/sizeof(num[0]);
    int max=0;
    int sum=0;
    bool done=0;
    
    for(int i=0 ; i < size ; i++)
    {
        for (int k=i+2 ; k <size ; k++)
        { 
            done =0;
            for (int j=k+2 ; j<size ; j++)
            {
                sum=num[i]+num[k]+num[j];
                if (sum>max)
                {    max=sum;
                    done=1;     }
            }
            if (done==0)
            {
               sum=num[i]+num[k];
                if (sum>max)
                    max=sum; 
            }
            
        }
    }
    cout<<"Max sum is "<<max;
    return 0;
}
