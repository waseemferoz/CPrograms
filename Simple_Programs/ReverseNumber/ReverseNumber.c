#include <stdio.h>
#include <conio.h>

int sum=0,rem;

reverse_function(int num){

   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   
   else
      return sum;
   return sum;
}

int main(){
   int num,reverse_number;

   //User would input the number
   printf("\nEnter any number:");
   scanf("%d",&num);

   //Calling user defined function to perform reverse
   reverse_number=reverse_function(num);

   printf("\nAfter reverse the no is :%d",reverse_number);

   getch();

   return 0;
}

