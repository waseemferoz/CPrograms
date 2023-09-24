#include <stdio.h>
#include <conio.h>

int main()
{
   /* This array can hold a string of upto 25
    * chars, if you are going to enter larger string
    * then increase the array size accordingly ok
    */
   char str[25];
   int i;
   printf("Enter the string: ");
   scanf("%s",str);
 
   for(i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   printf("\nLower Case String is: %s",str);

   getch();
}
