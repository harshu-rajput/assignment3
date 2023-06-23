#include<stdio.h>
int main(){
    int x;
     printf(" enter the no : \n");
     scanf("%d",&x);
     
     if(x%10==5 || x%10==0){
        printf("no is divisble by 5");
     }
     else{
        printf("no is not divisible by 5");
     }


    return 0;
} 