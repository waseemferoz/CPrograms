#include <stdio.h>
#include <conio.h>

int main()
{
    int num1,num2,num3;
   
   //Ask user to input any three integer numbers
   printf("\nEnter value of num1, num2 and num3:");
   //Store input values in variables for comparsion
   scanf("%d %d %d",&num1,&num2,&num3);

   if((num1>num2)&&(num1>num3))
      printf("\n Number1 : %d is greatest", num1);

   else if((num2>num3)&&(num2>num1))
      printf("\n Number2 : %d is greatest", num2);

   else
      printf("\n Number3 : %d is greatest", num3);

   getch();
}