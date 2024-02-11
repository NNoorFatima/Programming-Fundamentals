//An Array of integers is given, both +ve and -ve. 
//You need to find the two elements such that their sum is closest to zero.
int main()
{
    int num[]={1,-4,-15,-5,3};
    int size= sizeof(num)/sizeof(num[0]);
    int closest=1111111111;
    int sum=0;
    int min_l, min_r;
    
    
    for (int i=0 ; i< size ; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            sum = num[i] + num[j];
            if(abs(closest) > abs(sum))
            {
              closest = sum;
              min_l = i;
              min_r = j;
            }
        }
        
    }
    cout<<"closest to 0 is "<<closest;
    return 0;
}
