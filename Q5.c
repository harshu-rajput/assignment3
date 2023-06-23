#include<stdio.h>
int main(){
     int x;
     printf(" enter the no : \n");
     scanf("%d",&x);
     
     if(x >99 && x<=999 ){
        printf("no is three digit");
     } 
     else
     {
        printf("no is not three digit no");
     }


    return 0;
} 