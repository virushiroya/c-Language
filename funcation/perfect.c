#include <stdio.h>

int perfect()
 {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

        
       for (int i = 1; i <= num / 2; i++) 
        {
            if (num % i == 0)
	        {
                sum += i;
            }
        }

        if (sum == num)
        {
            printf("%d is a perfect number.\n", num);
        } 
	    else 
	    {
            printf("%d is not a perfect number.\n", num);
        }

}
int main()
{
    int a;
    perfect();

    return 0;
}