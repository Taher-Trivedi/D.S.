#include<stdio.h>
#include<conio.h>
void tpz(int *,int *);
void main()
{
	int t,p;
	clrscr();
	printf("\nEnter value T : ");
	scanf("%d",&t);
	printf("\nEnter value P : ");
	scanf("%d",&p);
	tpz(&t,&p);
	getch();

}
void tpz(int *p1,int *p2)
{
	printf("\nT+P=%d",*p1+*p2);
	printf("\nT-P=%d",*p1-*p2);
	printf("\nT*P=%d",*p1**p2);
	printf("\nT/P=%d",*p1/ *p2);
	printf("\nT*T=%d",*p1**p1);
	printf("\nP*P=%d",*p2**p2);
}