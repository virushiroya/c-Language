//using function calling array in ruinning total.
#include<stdio.h>
int array()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},total=0,i;

        for(int i=0; i<10; i++)
        {
            total += arr[i];
        }

        
        return total;
}
int main()
{
    int runingtotal =array();
    
     printf("running total is : %d ",runingtotal);

    return 0;

}