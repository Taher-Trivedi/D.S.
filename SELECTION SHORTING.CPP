#include<stdio.h>
#include<conio.h>
#define size 5
void main()
{
	int x[size],i,temp,j;
	clrscr();
	for(i=0;i<size;i++)
	{
		printf("Enter value %d: ",i+1);
		scanf("%d",&x[i]);
	}
	for (i=0;i<size;i++)
	{
		for (j=i+1;j<size;j++) \\bubble shorting ma j=0 leva
		{
			if (x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	for (i=0;i<size;i++)
	{
		printf("\n\t%d:%d",i+1,x[i]);
	}
	getch();
}