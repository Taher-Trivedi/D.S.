#include<stdio.h>
#include<conio.h>
void main()
{
    struct tp
    {
      int x;
      char y[10];
    };
      struct tp z,*ptr;
      ptr=&z;
      clrscr();
      printf("enter roll:");
      scanf("%d",&z.x);
      printf("enter name :");
      scanf("%s",&z.y);
      printf("\n\t%d",ptr->x);
      printf("\n\t%s",ptr->y);
      getch();
}