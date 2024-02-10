/*
Enter value: Dikshita
The reversed string is : atihskiD
*/
#include<stdio.h>

int main()
{

  char str[20],rev[20],i,j;


  printf("Enter value: ");
  scanf("%[^\n]s",&str);

	for(i=0; str[i]!='\0'; i++)
	{
	} 
	i--;
	
	for(j=0; i>=0; j++)
	{
		rev[j]=str[i];
		i--;
	}
	
	   rev[j]='\0';
	
	printf("The reversed string is : %s\n",rev);

  return 0;

}