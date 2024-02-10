/*
Enter 1 student marks: 
enter sci marks --->89
enter GUJRATI marks --->89
enter ENGLISH marks --->89
Enter 2 student marks: 
enter sci marks --->90
enter GUJRATI marks --->90
enter ENGLISH marks --->90
Enter 3 student marks: 
enter sci marks --->80
enter GUJRATI marks --->80
enter ENGLISH marks --->80

NO.     sci     guj     eng     total   per
1       89      89      89      267     89
2       90      90      90      270     90
3       80      80      80      240     80
*/

#include<stdio.h>

struct student
{
    int NO,SCI,GUJ,ENG,TOTAL,PER;
};

int main()
{
    struct student stu[3];

    for(int i=0; i < 3; i++)
    {
        printf("Enter %d student marks: \n",i+1);
        printf("enter sci marks --->");
        scanf("%d",&stu[i].SCI);
        printf("enter GUJRATI marks --->");
        scanf("%d",&stu[i].GUJ);
        printf("enter ENGLISH marks --->");
        scanf("%d",&stu[i].ENG);

        stu[i].TOTAL = stu[i].SCI + stu[i].GUJ + stu[i].ENG;

        stu[i].PER = stu[i].TOTAL/3;

    }

    printf("\nNO.\tsci\tguj\teng\ttotal\tper\n");

    for(int i=0; i < 3; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",i+1,stu[i].SCI,stu[i].GUJ,stu[i].ENG,stu[i].TOTAL, stu[i].PER);
    }
}