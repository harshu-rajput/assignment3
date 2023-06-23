#include<stdio.h>
int main(){
int month,year;
 printf("enter month no : \n");
 scanf("%d",&month);

switch (month)
{
    case 1: 
printf("january = 31 days"); 
    break;
    case 2: 
                  printf(" enter the yaer : \n");
                  scanf("%d",&year);

                  if((year%4==0 )&& (year%100!=0) ||(year%400 == 0) ){
                  printf("%d is leap year so no of days is 29",year);
                    }
                  else{
                  printf("%d is not a leap year so no of days is 28");
                   }
    break;
    case 3: 
printf("march = 31 days"); 
    break;
    case 4: 
printf("april = 30 days"); 
    break;
    case 5: 
printf("may = 31 days"); 
    break;
    case 6: 
printf("june = 30 days"); 
    break;
    case 7: 
printf("july = 31 days"); 
    break;
    case 8: 
printf("august = 31 days"); 
    break;
    case 9: 
printf("september = 30 days"); 
    break;
    case 10: 
printf("octomber = 31 days"); 
    break;
    case 11 : 
printf("november = 30 days"); 
    break;
    case 12: 
printf("december = 31 days"); 
    break;

default:
printf("invalid month "); 
    break;
}
return 0;
}