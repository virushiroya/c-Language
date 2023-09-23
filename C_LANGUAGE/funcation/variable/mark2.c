#include<stdio.h>
    
void clac()
{
    
    int maths,sci,eng,total;
    float per;
	total=maths+eng+sci;
	per=total/3;
    
	printf("\ntotal is---> %d\n",total);
    printf("\npercentage is---> %.2f ",per);
   

}

void setdata()
{
    
    int maths,sci,eng,total;
    float per;

	printf("\nenter maths marks--->");
	scanf("%d",&maths);
	printf("\nenter english marks--->");
	scanf("%d",&eng);
	printf("\nenter sci marks--->");
	scanf("%d",&sci);
  
}

int main()
{
	setdata();

    clac();
	return 0;
}
	
	