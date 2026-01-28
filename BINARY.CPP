#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],first=0,last=9,mid=(first+last)/2,srch,i,flag=0,count=0;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("enter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	printf("\n\t enter search value:");
	scanf("%d",&srch);
	while(first<=last && flag==0)
	{
		if(srch==x[mid])
		{
			printf("\n\t value found..");
			flag=1;
		}
		else if(srch<x[mid])
		{
			last=mid-1;
			mid=(first+last)/2;
		}
		else
		{
			first=mid+1;
			mid=(first+last)/2;
		}
		count++;
	}
	printf("\n\tcount is :%d",count);
	if(flag==0)
	{
		printf("\n\t value not found...!!");
	}
	getch();
}