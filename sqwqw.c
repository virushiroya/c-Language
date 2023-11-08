#include<stdio.h>

int main()
{
    int a[10][20][30][40][50];

    a[5];

    for(i=0;i<5;i++)
    {
        if(a[i]==20)
        {
            printf("%d",i);
        }
    }

    return 0;
}