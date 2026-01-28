#include<stdio.h>
#include<conio.h>
#define size 5
int x[size],front=0,rear=0;
void add()
{
	if (rear==size)
	{
		printf("\n\t queue is full..");
	}
	else
	{
		printf("\n\t enter value:");
		scanf("%d",&x[rear]);
		printf("\n\t value enterd.. ");
		rear++;
	}
}
void disp()
{
	if(rear==0)
	{
		printf("\n\t queue is empty..");
	}
	else
	{
		int i;
		for(i=front;i<rear;i++)
		{
			printf("\n\t %d ",x[i]);
		}
	}
}
void del()
{
	if(rear==0)
	{
		printf("\n\t queue is empty..");
	}
	else
	{
		printf("\n\t value %d removed ",x[front]);
		front++;
		if(front==rear)
		{
			front=0;
			rear=0;
		}
	}
}
void main()
{
	int ch;
	while(1)
      {
	clrscr();
	printf("1- add data");
	printf("\n\t2- display data ");
	printf("\n\t3- remove data");
	printf("\n\t4- exit");
	printf("\n\t enter your choice-");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			add();
			break;
		case 2:
			disp();
			break;
		case 3:
			del();
			break;
		case 4:
			exit();
		default :
			printf("\n\t invaild choice..");
	}
	 getch();
      }
}