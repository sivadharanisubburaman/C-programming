#include <stdio.h>

int main()
{
   int day;
   printf("Enter the number");
   scanf("%d" , & day);
   if(day==1)
   {
       printf("SUNDAY");
   }
   else if(day==2)
   {
       printf("MONDAY");
   }
   
    else
    {
        printf("invalid day");
    }
}
