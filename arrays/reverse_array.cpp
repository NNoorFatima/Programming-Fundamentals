int main()
{
    int num[]={1,2,3,4,5,6,7,8,9,10};
    const int size= sizeof(num)/sizeof(num[0]);
    int j=size-1;
    int i=0;
    int temp=0;
    //reversing array---------------------------
   while (i<size/2 && j>=4)
    {
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
        i++;
        j--;
    }
