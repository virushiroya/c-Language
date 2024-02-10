/*
Enter any value : 5
 N is : 1
 N is : 2
 N is : 3
 N is : 4
 N is : 5
*/
#include<stdio.h>

void Forloop()
{
    int a,n;

    printf(" Enter any value : ");
    scanf("%d",&n);

 	for(a=1;  a<=n; a++)

	{
		printf(" N is : %d\n",a);
	}

}
int main()
{
    Forloop();

    return 0;
}