#include<stdio.h>
    int maths,sci,eng,total;
    float per;

void clac()
{
	total=maths+eng+sci;
	per=total/3;
    
}

void setdata()
{
	printf("\nenter maths marks--->");
	scanf("%d",&maths);
	printf("\nenter english marks--->");
	scanf("%d",&eng);
	printf("\nenter sci marks--->");
	scanf("%d",&sci);
    printf("\ntotal is---> %d\n",total);
    printf("\npercentage is---> %.2f ",per);
	
   
}

int main()
{
	setdata();

    clac();
}
	
	