#include<stdio.h>
#include<conio.h>
main()
{
   float F;
   int C;
   clrscr();

   printf("Enter The Temperature in Fahrenheit :");
   scanf("%f",&F);

   C=(F-32)*5/9;

   printf("The Temperature in Celsius is : %d",C);

   getch();
}