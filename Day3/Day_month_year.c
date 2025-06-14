#include<stdio.h>

int n;

int main(){
    int day,month,year;
    printf("Enter the Date (dd/mm/yyyy) : ");
    scanf("%d/%d/%d",&day,&month,&year);
    
    int valid=1;

    if(month < 1 && month >12){
        valid = 0;   
    }
    else{
        if(day < 1 ){
            valid = 0;
        } else if (month==2) {
            int leap = (( year%4==0 && year%100!=0) || (year%400==0));
            if((leap && day > 29) || (!leap && day > 28)){
                valid =0;
            }
        } else if(month == 4,6,9,11){
            if( day > 30)
            valid = 0;
        } else{
            if(day > 31){
            valid=0;
            } 
        }
    }
    
    if(valid){
        printf("Valid Date ");
    }
    else{
        printf("Invalid Date");
    }
    return 0;
}
