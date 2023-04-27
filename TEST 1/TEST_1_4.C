#include<stdio.h>
#include<conio.h>
main()
{
  int x;
  int y;
  int z;
  int a;

  clrscr();

  printf("Enter x :");
  scanf("%d",&x);

  printf("Enter y :");
  scanf("%d",&y);

  printf("Enter z :");
  scanf("%d",&z);

  a=x*x+y*y+z*z+2*x*y+2*y*z+2*x*z;

  printf("(x+y+z)^2 : %d",a);

  getch();
}