/*
enter customer number:1
enter  products name:mobile
enter  rate:15000
enter  qty:3
enter customer number:2
enter  products name:leptop
enter  rate:50000
enter  qty:2


products No.    Products Name   rate    Qty.     Ammount          discount      billammount     GST     netbill
1               mobile          15000    3       45000            2250           42750          7686      50436
2               leptop          50000    2       100000           5000           95000          17100     112100
*/

#include<stdio.h>
struct data
{
	int p;
	char product[20];
	int rate,qty,amt,dis,billamt,gst,netbill;
};
int main()
{
	struct data a[5];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter customer number:");
		scanf("%d",&a[i].p);
		printf("enter  products name:");
		scanf("%s",&a[i].product);
		printf("enter  rate:");
		scanf("%d",&a[i].rate);
		printf("enter  qty:");
		scanf("%d",&a[i].qty);
	}
	printf("\n\nproducts No.\tProducts Name\trate\tQty.\t Ammount\t  discount\tbillammount\tGST\tnetbill");
	for(i=0;i<2;i++)
	{
		a[i].amt=a[i].rate*a[i].qty;
		a[i].dis=a[i].amt/100*5;
		a[i].billamt=a[i].amt-a[i].dis;
		a[i].gst=a[i].billamt/100*18;
		a[i].netbill=a[i].billamt+a[i].gst;
		printf("\n%d\t\t%s\t\t%d\t %d\t %d\t\t  %d\t\t %d\t\t%d\t  %d",a[i].p,a[i].product,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billamt,a[i].gst,a[i].netbill);
	}
}
