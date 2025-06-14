#include <stdio.h>

int main()
{
    int num=1011,val=1,sum=0;
    while (num>0){
        if(num%10==1){
            sum=sum+val;
            
        }
        val=val*2;
        num=num/10;
        
    }
   
   
       printf("sum : %d",sum);

    return 0;
}
