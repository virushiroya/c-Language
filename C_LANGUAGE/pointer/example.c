//pointer is use to store any variable address
//   ---> ( * ) to creat pointer

#include<stdio.h>
int main()
{
    int a=10, *p;
    p=&a;

    printf("value of a is : %d\n",a);
    printf("Address of a is : %d\n",&a);
    printf("Address of a in p is : %d\n",p);
    printf("Address of p is : %d\n",&p);
    printf("value of a in p is : %d",*p);
   
}