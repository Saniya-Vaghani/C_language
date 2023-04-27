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

  a=x*x*x+y*y*y+z*z*z+3*(x+y)*(y+z)*(z+x);

  printf("(x+y+z)^3 : %d",a);

  getch();
}